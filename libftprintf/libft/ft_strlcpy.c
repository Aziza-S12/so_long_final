/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/17 19:42:44 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	j;
	size_t	n;
	char	*s;

	j = 0;
	n = 0;
	s = (char *)src;
	if (!dest)
	{
		return (0);
	}
	n = ft_strlen(s);
	if (!dsize)
	{
		return (n);
	}
	while (s[j] && j < dsize - 1)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (n);
}

// int main() {
//   char k[6] = "Hello\0";
//   char l[5] = "there";
// ft_strlcpy(k, l, 10);
//   return 0;
// }