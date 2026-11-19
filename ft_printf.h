#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_dec_to_hex(unsigned long long int nb, int is_up);
int	ft_print_addr(unsigned long long int nb);
int	ft_print_dec(long int n);

#endif