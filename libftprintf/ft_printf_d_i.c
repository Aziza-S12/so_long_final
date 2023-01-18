/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:38:40 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/20 15:56:55 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d_i(int num)
{
	int	i;

	i = 0;
	if (num == -2147483648)
	{
		return (write (1, "-2147483648", 11));
	}
	if (num < 0)
	{
		i += write (1, "-", 1);
		num = (-num);
	}
	if (num > 9)
	{
		i += ft_printf_d_i(num / 10);
		i += ft_printf_d_i(num % 10);
	}
	else
	{
		i += ft_printf_c(num + 48);
	}
	return (i);
}

// int main()
// {
// 	char x = 7;

// 	printf("The x is:%i\n", ft_printf_d_i(x));

// 	return (1);
// }
