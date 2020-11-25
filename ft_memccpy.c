/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:34:41 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:34:41 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = dest;
	psrc = src;
	while (n--)
	{
		if ((*pdest++ = *psrc++) != (unsigned char)c)
			return (pdest);
	}
	return (NULL);
}
