/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:37:34 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:37:34 by oadams           ###   ########.fr       */
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
