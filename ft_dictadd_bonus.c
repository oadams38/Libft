/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictadd_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:07 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:07 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_dict	**ft_dictadd(t_dict **head, char *key, void *value)
{
	t_dict	*newentry;

	if (head == NULL || *head == NULL || key == NULL)
		return (NULL);
	if (ft_dictget(head, key) != NULL)
		return (NULL);
	if ((newentry = ft_dictnew(key, value)) == NULL)
		return (NULL);
	newentry->next = (*head);
	(*head) = newentry;
	return (head);
}
