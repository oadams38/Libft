/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:52 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:27:54 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_strisalnum(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isalnum(str[i]) == -1)
			return (-1);
	}
	return (1);
}
