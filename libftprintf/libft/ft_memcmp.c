/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:51 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/10 18:17:08 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares byte string s1 against byte string s2
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*v1;
	unsigned char	*v2;

	if (n < 1)
		return (0);
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (*v1 == *v2 && n > 1)
	{
		n--;
		v1++;
		v2++;
	}
	return (*v1 - *v2);
}

// int main()
// {
// 	char str1[15] = "check";
// 	char str2[15] = "CHECK";
// 	int res;

// 	res = ft_memcmp(str1, str2, 5);

// 	printf("Result is:%i\xA", res);

// 	return (0);
// }