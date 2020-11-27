/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictnew_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:18 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:23:19 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_dict	*ft_dictnew(char *key, void *value)
{
	t_dict	*newdict;

	if (key == NULL)
		return (NULL);
	if ((newdict = (t_dict*)malloc(sizeof(t_dict))) == NULL)
		return (NULL);
	newdict->key = key;
	newdict->value = value;
	newdict->next = NULL;
	return (newdict);
}
