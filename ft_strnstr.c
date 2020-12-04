/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:28:48 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 13:41:13 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ps1;
	size_t	i;
	size_t	j;
	size_t	n_trace;

	if (!s1 && !s2)
		return ((char*)s1);
	if (*s2 == '\0')
		return ((char*)s1);
	ps1 = (char*)s1;
	n_trace = n;
	i = 0;
	while (n-- != 0 && s1[i])
	{
		j = 0;
		while (s2[j] && s1[i + j] && s2[j] == s1[i + j])
			j++;
		if (s2[j] == '\0' && n_trace >= (i + j))
			return (&ps1[i]);
		i++;
	}
	return (NULL);
}
