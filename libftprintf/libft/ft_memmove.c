/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:11:27 by asadritd          #+#    #+#             */
/*   Updated: 2022/05/26 16:44:10 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*desti;
	char	*source;

	desti = (char *)dest;
	source = (char *)src;
	if (dest == src)
		return (dest);
	if (source < desti)
	{
		while (len--)
			*(desti + len) = *(source + len);
		return (dest);
	}
	while (len--)
	{
		*desti++ = *source++;
	}
	return (dest);
}
