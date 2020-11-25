/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:02 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:02 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_d;
	size_t	i;

	i = 0;
	size_d = ft_strlen(dst);
	size_d = size_d > size ? size : size_d;
	if (size == 0 || size - size_d == 0)
		return (size_d + ft_strlen(src));
	while (src[i] && i < size - size_d - 1)
	{
		dst[size_d + i] = src[i];
		i++;
	}
	dst[size_d + i] = '\0';
	return (size_d + ft_strlen(src));
}
