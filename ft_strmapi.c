/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:12 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:12 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if ((str = ft_calloc(size + 1, sizeof(str))) == NULL)
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = f((unsigned int)size, s[size]);
	return (str);
}
