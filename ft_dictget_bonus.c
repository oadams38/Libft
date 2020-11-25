/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:19 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:19 by oadams           ###   ########.fr       */
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
