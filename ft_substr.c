/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:29:06 by oadams            #+#    #+#             */
/*   Updated: 2020/12/04 14:03:22 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if ((str = malloc(sizeof(str) * len + 1)) == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	str[len] = '\0';
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
