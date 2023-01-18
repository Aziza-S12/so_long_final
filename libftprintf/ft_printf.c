/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:26:08 by asadritd          #+#    #+#             */
/*   Updated: 2023/01/10 18:01:37 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_types(va_list args, const char c)
{
	int	charac_printed;

	charac_printed = 0;
	if (c == 'd' || c == 'i')
		charac_printed += ft_printf_d_i(va_arg(args, int));
	else if (c == 's')
		charac_printed += ft_printf_s(va_arg(args, char *));
	else if (c == 'x' || c == 'X')
		charac_printed += ft_printf_x_upx(va_arg(args, unsigned int), c);
	else if (c == 'u')
		charac_printed += ft_printf_u(va_arg(args, unsigned int));
	else if (c == 'c')
		charac_printed += ft_printf_c(va_arg(args, int));
	else if (c == 'p')
	{
		charac_printed += write(1, "0x", 2);
		charac_printed += ft_printf_p(va_arg(args, unsigned long int));
	}
	else if (c == '%')
		charac_printed += ft_printf_c(37);
	return (charac_printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1])
			{
				printed += print_types(args, str[i + 1]);
				i += 2;
			}	
		}
		else
		{
			printed += write(1, &str[i], 1);
			i++;
		}
	}
	va_end(args);
	return (printed);
}

// int main()
// {
// 	int x = 6;
// 	char *s = "okay";
// 	void *ptr = NULL;
// 	ft_printf("ththt%d%s%p\n", x, s, ptr);
// 	printf("ththt%d%s%p", x, s, ptr);
// 	return (1);
// }

// int main(int argc, char **argv)
// {
// 	while (*argv = )
// }