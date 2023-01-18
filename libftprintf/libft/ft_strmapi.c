/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:35:57 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:35:58 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s - the string on which to iterate, f - function to apply to each character
// Applies the func f to each char of str passes as argument by giving its index
// as first arg to create a "new" str with malloc
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	size_t	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	len = ft_strlen(s);
	str[len] = '\0';
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/*char	my_func(unsigned int x, char str)
{
 	printf ("My function: index = %d and %c\xA", x, str);
 	return (str - 32);
}

int main()
{
 		char str[15] = "Hey there";
  	char *res = ft_strmapi(str, my_func);
  	printf("The result is %s\xA", res);
 	return (0);
}*/