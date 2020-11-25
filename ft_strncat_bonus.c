/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:14 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:14 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	s_dest;
	int	i;

	s_dest = ft_strlen(dest);
	i = -1;
	while (src[++i] && n--)
		dest[s_dest + i] = src[i];
	dest[s_dest + i] = '\0';
	return (dest);
}
