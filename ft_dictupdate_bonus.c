/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictupdate_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:50 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 13:03:03 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_dictupdate(t_dict **head, char *key, void *value, size_t value_size)
{
	t_dict	*tmp;
	void	*previous_value;

	if (head == NULL || *head == NULL || key == NULL)
		return (NULL);
	tmp = (*head);
	while (ft_strcmp(tmp->key, key) != 0 && tmp->next != NULL)
		tmp = tmp->next;
	if (ft_strcmp(tmp->key, key) == 0)
	{
		previous_value = tmp->value;
		if ((tmp->value = malloc(value_size)) == NULL)
		{
			tmp->value = previous_value;
			return (previous_value);
		}
		tmp->value = ft_memcpy(tmp->value, value, value_size);
		tmp->del(previous_value);
		return (tmp->value);
	}
	else
		return (NULL);
}
