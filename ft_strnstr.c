/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:29 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:29 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ps1;
	int		i;
	int		j;

	ps1 = (char*)s1;
	i = -1;
	while (n-- != 0 && s1[++i])
	{
		j = 0;
		while (s2[j] && s1[i + j] && s2[j] == s1[i + j])
			j++;
		if (s2[j] == '\0' && (int)n - j > 0)
			return (&ps1[i]);
	}
	return (NULL);
}
