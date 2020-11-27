/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictupdate_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:50 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:23:51 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_dictupdate(t_dict **head, char *key, void *value)
{
	t_dict	*tmp;
	void	*previous_value;

	if (head == NULL || *head == NULL || key == NULL)
		return (NULL);
	tmp = (*head);
	while (tmp->key != key && tmp->next != NULL)
		tmp = tmp->next;
	if (tmp->key == key)
	{
		previous_value = tmp->value;
		tmp->value = value;
		return (previous_value);
	}
	else
	{
		ft_dictadd(head, key, value);
		return (value);
	}
}
