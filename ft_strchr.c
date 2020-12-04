/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:03 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 10:27:01 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;
	int		i;

	ps = (char*)s;
	i = -1;
	while (s[++i])
	{
		if (s[i] == (char)c)
			return (&ps[i]);
	}
	if ((char)c == '\0')
		return (&ps[i]);
	return (NULL);
}
