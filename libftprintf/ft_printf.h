/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:26:12 by asadritd          #+#    #+#             */
/*   Updated: 2022/07/20 21:46:41 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_c(int a);
int	ft_printf_s(char *str);
int	ft_printf_d_i(int num);
int	ft_printf_u(unsigned int n);
int	ft_printf_x_upx(unsigned int n, const char hexa);
int	ft_printf_p(unsigned long int n);

#endif