/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:18:03 by oadams            #+#    #+#             */
/*   Updated: 2020/11/25 09:18:03 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (2147483647 / nmemb < size)
		return (NULL);
	if ((mem = malloc(nmemb * size)) == NULL)
		return (NULL);
	return (ft_memset(mem, 0, nmemb * size));
}
