/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:35 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:35 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_freetab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i] != NULL)
		free((void*)tab[i]);
	free((void*)tab);
}