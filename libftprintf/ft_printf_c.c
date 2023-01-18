/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:08:57 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/20 21:45:26 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int a)
{
	write (1, &a, 1);
	return (1);
}

// int main()
// {
// 	char x;
// 	x = 'D';
// 	printf("The char:%c\n", x);

// 	return (0);
// }