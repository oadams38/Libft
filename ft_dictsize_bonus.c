/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictsize_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:44 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:23:46 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

size_t	ft_dictsize(t_dict **head)
{
	size_t	i;

	i = 0;
	if (head == NULL || *head == NULL)
		return (i);
	while ((i++) && (*head)->next != NULL)
		(*head) = (*head)->next;
	return (i);
}
