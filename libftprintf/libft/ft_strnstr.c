/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:26:18 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/16 17:19:05 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string needle
// in the string haystack,where not more than len characters are searched.
// Characters that appear after a `\0' character are not searched.
#include "libft.h"

char	*ft_strnstr(const char *bigstr, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)bigstr);
	if (ft_strlen(needle) > len)
		return (NULL);
	if (len > ft_strlen(bigstr))
		len = ft_strlen(bigstr);
	while (i < len)
	{
		if (ft_strncmp((char *)&bigstr[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len)
				return (NULL);
			return ((char *)&bigstr[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char str1[30] = "Search word in this string";
// 	const char str2[10] = "word";
// 	// char *res;

// 	// res = ft_strnstr(str1, str2, 15);

// 	printf("The small string is: %s\xA", ft_strnstr(str1, str2, 15));

// 	return (0);
// }