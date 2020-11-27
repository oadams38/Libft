/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:22:40 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:22:43 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int			ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	unsigned int	n;

	n = 0;
	i = 0;
	sign = 1;
	while (nptr[i] && ft_isspace(nptr[i]))
		i++;
	if (nptr[i] && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(nptr[i]))
		n = n * 10 + nptr[i++] - '0';
	if (n > 2147483647)
	{
		if (n == 2147483648 && sign == -1)
			return (-2147483648);
		return (0);
	}
	return ((int)n * sign);
}
