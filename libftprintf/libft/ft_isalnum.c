/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:00:04 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/20 17:10:39 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	char s;
// 	s = 'f';
// 	printf("\nAscii output is: %d", ft_isalnum(s));