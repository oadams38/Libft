/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strintab_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:48 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:27:50 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_strintab(char **tab, char *str)
{
	int	i;

	i = -1;
	while (tab[++i] != NULL)
	{
		if (ft_strequ(tab[i], str))
			return (i);
	}
	return (-1);
}
