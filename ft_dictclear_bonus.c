/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictclear_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:11 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:22:55 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_dictclear(t_dict **head)
{
	t_dict	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = (*head);
	while ((*head)->next != NULL)
	{
		tmp = (*head);
		*head = (*head)->next;
		if (tmp->value != NULL)
			tmp->del(tmp->value);
		free((void*)tmp->key);
		free((void*)tmp);
	}
	tmp = (*head);
	if (tmp->value != NULL)
		tmp->del(tmp->value);
	free((void*)tmp->del);
	free((void*)tmp->key);
	free((void*)tmp);
	free((void*)head);
	head = NULL;
}
