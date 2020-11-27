/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:25:57 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:25:58 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static void	print_n(int n)
{
	char	c;

	if (n > 0)
	{
		c = (unsigned char)(n % 10 + '0');
		print_n(n / 10);
		write(1, &c, 1);
	}
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	print_n(n);
}
