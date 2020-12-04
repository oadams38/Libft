/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictnew_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:23:18 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:37:25 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_dict	*ft_dictnew(char *key, void *value, size_t value_size,
		void (*del)(void*))
{
	t_dict	*newdict;
	void	*m_value;

	if (key == NULL)
		return (NULL);
	if ((newdict = (t_dict*)malloc(sizeof(t_dict))) == NULL)
		return (NULL);
	if ((newdict->key = ft_strcreate(key)) == NULL)
	{
		free((void*)newdict);
		return (NULL);
	}
	if (value_size != 0)
	{
		newdict->del = del;
		m_value = malloc(value_size);
		m_value = ft_memcpy(m_value, value, value_size);
		newdict->value = m_value;
	}
	else
		newdict->value = NULL;
	newdict->next = NULL;
	return (newdict);
}
