/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:45 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:45 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > 0 && ft_strchr(set, s1[j]) != NULL)
		j--;
	if (j <= i)
		return (calloc(1, sizeof(char)));
	return (ft_substr(s1, (unsigned int)i, j - i + 1));
}
