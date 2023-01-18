/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:17:28 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/27 14:03:20 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Lower case to upper case conversion
#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		return (a - 32);
	else
		return (a);
}
