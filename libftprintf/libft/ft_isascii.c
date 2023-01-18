/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:55 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/20 16:35:26 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int s)
{
	if (s >= 0 && s <= 127)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	char s;
// 	s = 'f';
// 	printf("\nAscii output is: %d", ft_isascii(s));

// 	s = '_';
// 	printf("\nNon ascii output is: %d", ft_isascii(s));

// 	return (0);
// }