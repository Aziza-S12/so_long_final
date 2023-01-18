/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokrokhi <kokrokhi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:29:26 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/06 19:54:16 by kokrokhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dynamic allocation of multiple blocks of memory. Different from malloc,
// cause it needs two arguments (not 1) and memory allocated by calloc is
// initialized to zero. 

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pt;

	if (count >= 65535 || size >= 65535)
		return (NULL);
	pt = malloc(count * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, count * size);
	return (pt);
}

// int main(void)
// {
// 	char*	ptr;
// 	int	i;

// 	i = 5;
// 	printf("Number of elements:%d\n", i);

// 	ptr = (char*)calloc(i, sizeof(int));

// 	printf("size: %zu\n", ft_strlen(ptr));
// 	printf("s: %d\n", *ptr);
// 	printf("s: %d\n", *(ptr++));
// 	printf("s: %d\n", *(ptr++));
// 	printf("s: %d\n", *(ptr++));
// 	printf("s: %d\n", *(ptr++));

// 	return (0);
// }