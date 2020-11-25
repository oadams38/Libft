/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:19:22 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:19:22 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newitem)
{
	t_list	*tmp;

	if (*alst == NULL)
	{
		*alst = newitem;
		return ;
	}
	tmp = *alst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newitem;
}
