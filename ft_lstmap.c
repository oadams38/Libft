/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:34:26 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:34:26 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	**ptr;

	if (lst == NULL)
		return (NULL);
	if (lst->next != NULL)
	{
		newlist = ft_lstmap(lst->next, f, del);
		ptr = &newlist;
		ft_lstadd_front(ptr, ft_lstnew(f(lst->content)));
	}
	else if ((newlist = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	return (newlist);
}
