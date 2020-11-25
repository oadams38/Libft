/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:34:11 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:34:11 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		tmp = *lst;
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
