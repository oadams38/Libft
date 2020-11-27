/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:25:40 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:25:43 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	unsigned char		*tmp;
	size_t				i;

	pdest = dest;
	psrc = src;
	tmp = malloc(sizeof(tmp) * n);
	i = n;
	while (n-- && *pdest++)
		*tmp++ = *psrc++;
	while (i--)
		*--pdest = *--tmp;
	return (dest);
}
