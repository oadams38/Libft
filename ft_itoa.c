/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:24:39 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:48:47 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_str(char *str, int n)
{
	char	reste[2];

	if (n > 0)
	{
		reste[0] = (unsigned char)(n % 10 + '0');
		reste[1] = '\0';
		fill_str(str, n / 10);
		ft_strlcat(str, reste, 100);
	}
}

static char	*ft_strnew(size_t size)
{
	char	*str;

	size++;
	if ((str = malloc(size)) == NULL)
		return (NULL);
	while (size--)
		str[size] = '\0';
	return (str);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		tmp;
	int		sign;

	if (n == -2147483648)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	if (n == 0)
		return (ft_strcpy(ft_strnew(1), "0"));
	sign = n < 0 ? -1 : 1;
	n *= sign;
	i = 0;
	tmp = n;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	i = sign == -1 ? i + 1 : i;
	if ((str = ft_strnew(i)) == NULL)
		return (NULL);
	str[0] = sign < 0 ? '-' : '\0';
	fill_str(str, n);
	return (str);
}
