/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:22:17 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/16 14:42:28 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares not more than n characters
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i] || str1[i] == 0 || str2[i] == 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "New day";
// 	char str2[] = "New day new beginning";
// 	int len;
// 	len = ft_strncmp(str1, str2, 10);

// 	printf("String 1 is:%s\12", (char *)str1);
// 	printf("String 2 is:%s\xA", (char *)str2);
// 	printf("Strings difference is:%d", ft_strncmp(str1, str2, len));

// 	return (0);

// }