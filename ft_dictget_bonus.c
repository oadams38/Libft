/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:14 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:08:06 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_dictget(t_dict **head, char *key)
{
	t_dict	*tmp;

	tmp = *head;
	if (head == NULL || *head == NULL || key == NULL)
		return (NULL);
	while (tmp->key != key && tmp->next != NULL)
		tmp = tmp->next;
	if (tmp->next == NULL && tmp->key != key)
		return (NULL);
	return (tmp->value);
}
