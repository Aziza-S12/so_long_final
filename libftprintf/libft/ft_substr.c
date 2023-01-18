/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokrokhi <kokrokhi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:31:03 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/06 19:43:34 by kokrokhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create the substring from s string
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	i_2;

	i = start;
	i_2 = 0;
	if (!s)
		return (NULL);
	if (len <= 0)
		return (ft_strdup("\0"));
	if (i > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = ft_calloc (sizeof(*s), (len + 1));
	if (!substr)
		return (NULL);
	while (i_2 < len && s[i])
	{
		substr[i_2] = (char)s[i];
		i++;
		i_2++;
	}
	substr[i_2] = '\0';
	return (substr);
}

// int main() if len > strlen - return what ?
// {
// 	char str[30] = "This is the full string";
// 	int str2 = 10;
// 	char *result;

// 	result = ft_substr(str, str2, 15);

// 	printf("The result is:%s\xA", result);

// 	return (0);
// }