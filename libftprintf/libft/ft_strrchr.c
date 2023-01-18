/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:21:23 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/27 16:57:10 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locates last occurance of a in a string
// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int a)
{
	char	*last;
	char	f;
	size_t	i;

	last = (char *)s;
	f = (char)a;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == f)
			return (last + i);
		i--;
	}
	if (last[i] == f)
		return (last);
	return (0);
}

// int main()
// {
// 	const char	str[] = "Printf fff fx";
// 	const char s = 'f';
// 	char *ptr;
// 	ptr = ft_strrchr(str, s);
// 	printf("Last %c in a string is:%s", s, ptr);
// 	return (0);
// }