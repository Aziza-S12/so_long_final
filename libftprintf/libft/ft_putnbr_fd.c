/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:37:56 by asadritd          #+#    #+#             */
/*   Updated: 2022/06/20 15:37:57 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the int n to the file descriptor (write func)
// Return value none
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
}

// int main(void)
// {
// 	int x = -2147483648;
// 	ft_putnbr_fd(x, 1);
// 	return (0);
// }