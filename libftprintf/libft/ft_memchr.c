/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:24:59 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/10 15:59:40 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate byte in bity string. Locates first occurence of c 
// (conver-d to uns-d char) in string s
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n--)
	{
		if (*a == (unsigned char) c)
			return ((void *)a);
		a++;
	}
	return (0);
}

// int main()
// {
// 	const char str[30] = "Make the check";
// 	int ch = 99;
// 	char *str1;

// 	str1 = ft_memchr(str, ch, ft_strlen(str));

// 	printf("String after %c is: %s\xA", ch, str1);

// 	return (0);
// }