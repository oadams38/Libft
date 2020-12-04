/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmchar_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:28:55 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:28:56 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strrmchar(char *str, char c)
{
	int		i;
	int		j;
	char	*strrm;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != c)
			j++;
	}
	if ((strrm = ft_strnew(j)) == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != c)
			strrm[j++] = str[i];
	}
	return (strrm);
}
