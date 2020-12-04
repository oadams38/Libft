/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictadd_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:05 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:54:27 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_dict	**ft_dictadd(t_dict **head, t_dict *newentry)
{
	if (newentry == NULL)
		return (NULL);
	newentry->next = (*head);
	(*head) = newentry;
	return (head);
}
