/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:34:01 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:34:02 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// allocates with malloc & returns an array of strings 
// from splitting 's' using the character 'c' as a delimeter
// The array must end with a NUll pointer

int	num_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (words);
}

char	*ft_word(const char *str1, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[i] = str1[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	int		ind;
	char	**new;

	if (!s)
		return (NULL);
	new = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!new || !s)
		return (NULL);
	i = -1;
	k = 0;
	ind = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && ind < 0)
			ind = i;
		else if ((s[i] == c || i == ft_strlen(s)) && ind >= 0)
		{
			new[k++] = ft_word(s, ind, i);
			ind = -1;
		}
	}
	new[k] = 0;
	return (new);
}

// int	main (void)
// {
// 	char	**new;
// 	unsigned int i;
// 	int c;

// 	c = 0; 
// 	new = ft_split("This is the complicated one", 040);
// 	i = 0;
// 	while (i < 7)
// 	{
// 		printf("new[%d] = %s\xA", i, new[i]);
// 		i++;
// 	}
// 	return(0);
// }