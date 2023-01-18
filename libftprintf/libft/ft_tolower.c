/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:19:01 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/27 15:20:23 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		return (a + 32);
	else
		return (a);
}

// int main()
// {
// 	int s;
// 	s = 80;

// 	printf("\nbefore tolower:%c", s);
// 	printf("\nafter tolower:%c", ft_tolower(s));

// 	return (0);
// }