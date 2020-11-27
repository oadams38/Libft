/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:14 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:23:16 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_dictget(t_dict **head, char *key)
{
	if (head == NULL || *head == NULL || key == NULL)
		return (NULL);
	while ((*head)->key != key && (*head)->next != NULL)
		(*head) = (*head)->next;
	if ((*head)->next == NULL && (*head)->key != key)
		return (NULL);
	return ((*head)->value);
}
