/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:52 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:37:53 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the str to the file descriptor fd foll-d by new line
// Return value none
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write(fd, "\xA", 1);
}

// int main()
// {
// 	char str[] = "Being here and now";
// 	ft_putendl_fd(str, 2);
// 	return (0);
// }