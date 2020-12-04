/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:28:53 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:28:54 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strreplace(char *str, char *old, char *newsub)
{
	char	**tab;
	char	*newsubstr;

	tab = ft_splitset(str, old);
	newsubstr = ft_tabjoin(tab, newsub);
	ft_freetab(tab);
	free((void*)str);
	return (newsubstr);
}
