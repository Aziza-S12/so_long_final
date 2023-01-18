/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:15:14 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:33:01 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	k;
	size_t	j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (d_len >= dsize)
		return (s_len + dsize);
	if (dsize == 0)
		return (s_len);
	k = 0;
	j = d_len;
	if (d_len < dsize)
	{
		while (src[k] && (d_len + k) < dsize)
			dest[j++] = src[k++];
		if ((d_len + k) == dsize)
			dest[--j] = '\0';
		else
			dest[j] = '\0';
	}
	return (s_len + d_len);
}

// int main()
// {
// 	char first[] = "thishh";
// 	char sec[] = "string";
// 	int i;
// 	int size = 20;
// 	char buffer[size];

// 	ft_strlcpy(buffer, first, 9);
// 	i = ft_strlcat(buffer, sec, size);

// 	printf("Value is:%d\xA", i);

// 	return (0);
// }