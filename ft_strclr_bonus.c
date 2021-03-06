/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:07 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 14:20:48 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_strclr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		s[i] = '\0';
}
