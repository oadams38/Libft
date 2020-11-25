/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strintab_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:36:44 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:36:44 by oadams           ###   ########.fr       */
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
