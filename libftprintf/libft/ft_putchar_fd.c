/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:36:20 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:36:21 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the char c to the given file descriptor fd
// Return value none
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void)
{
    char ch = 'k';
    //int fd = open("Document/f.txt", O_WRONLY);
    ft_putchar_fd(k, 2);
    return(0);
}*/