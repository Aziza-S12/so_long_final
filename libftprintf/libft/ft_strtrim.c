/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokrokhi <kokrokhi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:33:53 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/06 19:42:35 by kokrokhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// // trimms the string (set chars), allocates with malloc and 
// returns copy of s1 with chars specified in 'set' removed 
// from the beginning and the end of the str

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	k = ft_strlen(s1);
	str = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (k > i && ft_strchr(set, s1[k - 1]))
			k--;
		str = (char *) malloc ((sizeof(char)) * (k - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], k - i +1);
	}
	return (str);
}

// int main()
// {
// 	printf("\t%s\xA", ft_strtrim("Thisistheone", "thne"));
//  	printf("\t\t\t%s\xA", ft_strtrim("Blablatrim", "blim"));

//  	return(0);
// }