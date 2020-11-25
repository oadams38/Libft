/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:36:37 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:36:37 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	s_size;

	s_size = ft_strlen(s1) > ft_strlen(s2) ?
			ft_strlen(s1) : ft_strlen(s2);
	return (ft_strnequ(s1, s2, s_size));
}
