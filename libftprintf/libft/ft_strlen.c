/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:03:01 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/27 16:36:40 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find length of string
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char str[20] = "Wonderful";
// 	int v = ft_strlen(str);
// 	printf("The lenght is %i\n",v);
// }