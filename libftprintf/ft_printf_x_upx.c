/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_upx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:42:47 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/22 10:36:44 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x_upx(unsigned int n, const char hexa)
{
	int		i;
	char	*str;

	if (hexa == 'x')
		str = "0123456789abcdef";
	else if (hexa == 'X')
		str = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_printf_x_upx(n / 16, hexa);
		i += ft_printf_x_upx(n % 16, hexa);
	}
	if (n < 16)
		i += ft_printf_c(str[n]);
	return (i);
}

// int main()
// {
// 	int num = 26;
// 	ft_printf_x_upx(num, 'x');
// 	return (1);
// }