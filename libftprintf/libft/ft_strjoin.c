/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:31:09 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 22:10:17 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// joining two strings, returning new string
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1_l;
	int		s2_l;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (s1_l + s2_l + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1_l + 1);
	ft_strlcpy(newstr + s1_l, s2, s2_l + 1);
	return (newstr);
}

// int main()
// {
// 	char str1[15] = "Join these";
// 	char str2[15] = "two strings";

// 	printf("Result is:%s\xA", ft_strjoin(str1, str2));

// 	return (0);
// }