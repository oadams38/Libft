/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:27:17 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:27:18 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strcreate(char *str)
{
	size_t	size;
	char	*s;

	size = ft_strlen(str);
	s = ft_strnew(size);
	return (ft_strcpy(s, str));
}
