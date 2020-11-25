/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:36:35 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:36:35 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char	*str;

	size++;
	if ((str = malloc(size)) == NULL)
		return (NULL);
	while (size--)
		str[size] = '\0';
	return (str);
}

char		*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	while (size--)
		str[size] = s[size];
	return (str);
}
