/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:28:28 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:28:29 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	while (size--)
		str[size] = f(s[size]);
	return (str);
}
