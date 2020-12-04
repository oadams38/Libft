/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:28:50 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 13:19:47 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ps;

	i = 0;
	ps = (char*)s;
	while (ps[i])
		i++;
	while (ps[i] != (unsigned char)c && i > 0)
		i--;
	return (ps[i] == (unsigned char)c ? &ps[i] : NULL);
}
