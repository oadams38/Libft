/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:25:40 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 15:25:26 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = dest;
	psrc = src;
	if (src < dest)
	{
		pdest = &dest[n - 1];
		psrc = &src[n - 1];
		while (n--)
			*pdest-- = *psrc--;
		return (dest);
	}
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
