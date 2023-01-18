/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:09:57 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/20 15:57:44 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
		return (0);
	if (n >= 10)
	{
		i += ft_printf_u(n / 10);
		i += ft_printf_u(n % 10);
	}
	else
	{
		i += (ft_printf_c(n + 48));
	}
	return (i);
}

// int main()
// {
// 	char x;
// 	x = 50;
// 	printf("The unsigned n is:%u\n", ft_printf_u(x));

// 	return (0);
// }