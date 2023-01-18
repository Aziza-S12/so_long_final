/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:19:58 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/27 16:07:56 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stdio.h"
#include "libft.h"

char	*ft_strchr(const char *s, int a)
{
	char	find;
	int		i;

	find = (unsigned char)a;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}

// int main()
// {
// 	const char	str[] = "Print af string";
// 	const char s = 'f';
// 	char *ptr;
// 	ptr = ft_strchr(str, s);
// 	printf("String from %c is:%s", s, ptr);
// 	return (0);
// }