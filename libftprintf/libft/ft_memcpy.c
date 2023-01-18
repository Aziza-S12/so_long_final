/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:09:45 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/17 19:42:57 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		*(char *)dest++ = *(char *)src++;
		a++;
	}	
	return (dest - n);
}

// int main()
// {
// 	char str[30] = "Have a good day";
// 	char s[45] = "gegehes";
// 	printf("\nBefore memcpy: %s\n",str);

// 	printf("%s", ft_memcpy(str, s, 7));

// 	printf("\nAfter memcpy:%s", str);

// 	return (0);
// }