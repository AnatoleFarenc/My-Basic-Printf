/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfarenc <anfarenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:44 by anfarenc          #+#    #+#             */
/*   Updated: 2025/11/13 09:33:07 by anfarenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"


static int	ft_print_value(char c, va_list argv)
{
	if (c == 'c')
		return (ft_print_char((int)va_arg(argv, int)));
	if (c == 's')
		return (ft_print_string((char *)va_arg(argv, char *)));
	if (c == '%')
		return (ft_print_char('%'));
	if (c == 'p')
		return (ft_print_addr((long long)va_arg(argv, long long)));
	if (c == 'x')
		return (ft_print_dec_to_hex((long long)va_arg(argv, long long), 0));
	if (c == 'X')
		return (ft_print_dec_to_hex((long long)va_arg(argv, long long), 1));
	if (c == 'i' || c == 'd')
		return (ft_print_dec((int)va_arg(argv, long int)));
	if (c == 'u')
		return (ft_print_dec((long int)va_arg(argv, long int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	argv;
	int	i;
	int	len;

	va_start(argv, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_print_value(str[i+1], argv);
			i+=2;
		}
		if (str[i])
		{
			ft_putchar_fd((char)str[i], 1);
			i++;
			len++;
		}
	}
	va_end(argv);
	return (len);
}
