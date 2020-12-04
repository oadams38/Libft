/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictrm_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:26 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:33:50 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_dictdelone(t_dict **head, char *key)
{
	t_dict	*prev;
	t_dict	*tmp;

	tmp = *head;
	if (head == NULL || *head == NULL || key == NULL)
		return ;
	while (tmp->key != key && tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp->next == NULL && tmp->key != key)
		return ;
	prev->next = tmp->next;
	free((void*)tmp->key);
	tmp->del(tmp->value);
	free((void*)tmp->del);
	free((void*)tmp);
}
