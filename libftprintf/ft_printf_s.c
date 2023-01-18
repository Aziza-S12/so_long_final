/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:09:50 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/21 12:58:32 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *s)
{
	int	x;

	x = 0;
	if (!s)
		return (write(1, ("(null)"), 6));
	while (s[x] != '\0')
	{
		write(1, &s[x], 1);
		x++;
	}
	return (x);
}

// int main()
// {
// 	char str[15] = "Print this str";
// 	char *res;

// 	res = ft_printf_s(str);

// 	printf("It is:%s\xA", res);

// 	return (1);
// }