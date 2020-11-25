/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:35:28 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:35:28 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	while (n-- != 0)
		*pdest++ = *psrc++;
	return (dest);
}
