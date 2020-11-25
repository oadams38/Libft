/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:36:27 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:36:27 by oadams           ###   ########.fr       */
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
