/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:22:07 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:22:19 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

double	ft_atof(const char *nptr)
{
	unsigned int	i;
	int				sign;
	double			n;
	double			dec;

	n = 0;
	dec = 0;
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
	if (!(nptr[i++] == '.' && nptr[i] && ft_isdigit(nptr[i])))
		return (n * (double)sign);
	while (ft_isdigit(nptr[i]))
		dec = dec * 10 + nptr[i++] - '0';
	while (dec > 1)
		dec /= 10;
	return ((n + dec) * (double)sign);
}
