/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:58:22 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/20 16:28:41 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	char d;
// 	d = '9';
// 	printf("\nDigit result is: %d", ft_isdigit(d));

// 	d = '3';
// 	printf("\nDigit two result is: %d", ft_isdigit(d));

// 	d = '?';
// 	printf("\nNon digit result is: %d", ft_isdigit(d));

// 	return (0);
// }