/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictclear_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:14 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:14 by oadams           ###   ########.fr       */
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
		free((void*)tmp->value);
		free((void*)tmp->key);
		free((void*)tmp);
	}
	tmp = (*head);
	free((void*)tmp->value);
	free((void*)tmp->key);
	free((void*)tmp);
	free((void*)head);
	head = NULL;
}
