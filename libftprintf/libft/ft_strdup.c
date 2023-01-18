/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:30:44 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 19:58:37 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// save a copy of a string, function allocates sufficient memory
// for a copy of the string s1, does the copy, and returns pointer to it 
#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	int		len;
	char	*str2;

	len = 0;
	while (str1[len])
		len++;
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str2))
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

// int main()
// {
// 	char s1[] = "Copy from here";
// 	char *s2 = ft_strdup(s1);

// 	printf("Copied string is:%s", s2);

// 	return (0);
// }