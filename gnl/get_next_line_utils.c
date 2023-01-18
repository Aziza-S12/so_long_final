/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:16:52 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/03 19:11:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
			i++;
	return (i);
}

char	*gnl_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

char	*gnl_substr(char const *s, unsigned int begining, size_t len)
{
	size_t	i;
	size_t	b;
	char	*str;

	str = malloc((sizeof(*s)) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	b = 0;
	while (s[i])
	{
		if (i >= begining && b < len)
		{
			str[b] = s[i];
			b++;
		}
		i++;
	}
	str[b] = 0;
	return (str);
}

char	*gnl_strdup(void)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * 1);
	ptr[0] = '\0';
	return (ptr);
}

char	*gnl_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	char	*ptr;

	i = 0;
	b = 0;
	ptr = malloc(sizeof(char) * (gnl_strlen(s1) + gnl_strlen(s2) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
			ptr[i] = s1[i];
			i++;
	}
	while (s2[b] != '\0')
	{
			ptr[i + b] = s2[b];
			b++;
	}
	ptr[i + b] = '\0';
	return (ptr);
}
