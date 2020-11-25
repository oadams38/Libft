/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:36:06 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:36:06 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ptr2;

	if (size != 0 && (ptr2 = malloc(size)) == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memcpy(ptr2, ptr, size);
		free(ptr);
	}
	return (ptr2);
}
