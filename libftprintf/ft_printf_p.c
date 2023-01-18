/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:09:36 by asadritd          #+#    #+#             */
/*   Updated: 2023/01/10 18:02:28 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(unsigned long int n)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		count = count + ft_printf_c(n + 48);
	}
	else if (n < 16)
	{
		count = count + ft_printf_c(n + 97 - 10);
	}
	else
	{
		count = count + ft_printf_p(n / 16);
		count = count + ft_printf_p(n % 16);
	}
	return (count);
}

// int main()
// {
// 	// int a = 50;
// 	// int *ptr = &a;
// 	char *ptr;
// 	ptr = ft_printf_p(26);

// 	printf("Ptr:%p", ptr);

// 	return (0);
// }