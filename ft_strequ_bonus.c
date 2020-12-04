/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:40 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 14:22:48 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	s_size;

	if (!s1 || !s2)
		return (-1);
	s_size = ft_strlen(s1) > ft_strlen(s2) ?
			ft_strlen(s1) : ft_strlen(s2);
	return (ft_strnequ(s1, s2, s_size));
}
