/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:35:50 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:35:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates with malloc, returns str repr-g
// the integer received as argum-t.
// Negative numbers must be handled.
#include "libft.h"

int	ft_length(long int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (i + 1);
	if (num < 0)
	{
		num *= (-1);
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_if(long nbr, char *nbr2)
{
	if (nbr == 0)
		nbr2[0] = 48;
	return (nbr2);
}

char	*ft_itoa(int n)
{
	char		*numb;
	size_t		i;
	long int	x;

	x = n;
	i = ft_length(x);
	numb = (char *)malloc(sizeof(char) * (ft_length(x) + 1));
	if (!numb)
		return (NULL);
	numb[i--] = '\0';
	ft_if(x, numb);
	if (x < 0)
	{
		numb[0] = '-';
		x *= (-1);
	}
	while (x > 0)
	{
		numb[i] = 48 + (x % 10);
		x /= 10;
		i--;
	}
	return (numb);
}

// int main(void)
// {
// 	printf("Result is:\n%s\xA", ft_itoa(-4747));
// 	return (0);
// }