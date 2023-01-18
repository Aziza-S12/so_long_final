/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:42 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:37:43 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the str s to the given file descriptor fd
// Return value none
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != 0)
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	char ch[15] = "This is first step\xA";
// 	ft_putstr_fd(ch, 1);
// 	return (0);
// }