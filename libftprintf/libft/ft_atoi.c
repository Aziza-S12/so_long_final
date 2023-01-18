/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:28:20 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/17 17:49:37 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts the initial portion of the (ASCII) string pointed to by str to int
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	convert;

	i = 0;
	value = 0;
	convert = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			convert = -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return (value * convert);
}

// int main()
// {
// 	char str[] = "478374987";
// 	int x = ft_atoi(str);

// 	printf("The number is:%d\xA", x);

// 	return 0;
// }