/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictrm_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:25 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:25 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_dictrm(t_dict **head, char *key)
{
	t_dict	*prev;

	if (head == NULL || *head == NULL || key == NULL)
		return ;
	while ((*head)->key != key && (*head)->next != NULL)
	{
		prev = (*head);
		(*head) = (*head)->next;
	}
	if ((*head)->next == NULL && (*head)->key != key)
		return ;
	prev->next = (*head)->next;
	free((void*)(*head)->key);
	free((void*)(*head)->value);
	free((void*)(*head));
}
