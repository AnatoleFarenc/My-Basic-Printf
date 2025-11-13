/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfarenc <anfarenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:50:26 by anfarenc          #+#    #+#             */
/*   Updated: 2025/11/13 11:46:50 by anfarenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	main(int arc, char ** arv)
{
	if (arc < 2)
	{
		printf("witch test would you like to take ? [1, 2, 3 ....]");
		return (0);
	}
	if (arv[1][0] == '1')
	{		
		// int test = -2147483648;
		// int	len = 0;
		// char *t = NULL;
		// printf("===== FT_PRINTF ======\n");
		// len = printf("| Ceci est un test avec une lettre   : %c\n" , 'c');
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec  un mot      : %s\n", t);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec  un pourcent : %%\n" );
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un chiffre   : %d\n", test);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un chiffre   : %i\n" , test);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec une adresse  : %p\n" , 0);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un usigned   : %u\n" , test);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un hexa      : %x\n" , test);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un hexa      : %X\n" , test);
		// printf("len : %d\n", len);
		// len = ft_printf("| Ceci est un test avec un simb non valide : %y\n" , 0);
		// printf("len : %d\n", len);
		ft_printf("Ceci est un %s avec un nombre egale a : %d%d\n", "test", 4, 23);
	
		// printf("===== PRINTF ======\n");
		// len = printf("| Ceci est un test avec une lettre   : %c\n" , 'c');
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec  un mot      : %s\n" , t);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec  un pourcent : %%\n" );
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un chiffre   : %d\n" , test);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un chiffre   : %i\n" , test);
		// printf("len : %d\n", len); 
		// len = printf("| Ceci est un test avec une adresse  : %p\n" , (void*)0);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un usigned   : %u\n" , test);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un hexa      : %x\n" , test);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un hexa      : %X\n" , test);
		// printf("len : %d\n", len);
		// len = printf("| Ceci est un test avec un simb non valide : %y\n" , 0);
		// printf("len : %d\n", len);
		return (0);
	}

	return (0);
}