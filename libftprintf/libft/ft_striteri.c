/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:36:09 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:36:10 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applied the func f to each char of the str passed
// as arg & passing its index at first arg. Each char
// is passed by address to f to be modified if necessary.
// Return value none
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*char	my_func(char *string)
{
 	printf("My func %s\xA", string);
}

int main(void)
{
	char str[10] = "Blossom";
  	printf("The str is %s\n", string);
  	ft_striteri(string, my_func);
  	printf("The result is %s\n", string);
  	return (0);
}*/