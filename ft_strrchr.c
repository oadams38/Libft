/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:32 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:32 by oadams           ###   ########.fr       */
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
	while (ps[i] != (unsigned char)c)
		i--;
	return (ps[i] == (unsigned char)c ? &ps[i] : NULL);
}
