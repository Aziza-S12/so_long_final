/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:06:11 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/25 19:08:49 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *a, int b, size_t len)
{
	unsigned char	*str;
	size_t			n;

	n = 0;
	str = a;
	while (n < len && str)
	{
		*str++ = b;
		n++;
	}
	return (a);
}

// int main()
// {
// 	char str[30] = "Have a good day";
// 	printf("\nBefore memset: %s\n",str);

// 	ft_memset(str +1, '.', 7);
// 	printf("After memset:%s", str);

// 	return (0);
// }