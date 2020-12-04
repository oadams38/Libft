/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:29:09 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:29:11 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static size_t	get_size(char **tab, char *sep)
{
	size_t	size_sep;
	size_t	size;
	int		i;
	int		j;

	size_sep = ft_strlen(sep);
	size = 0;
	j = -1;
	while (tab[++j] != NULL)
	{
		i = -1;
		while (tab[j][++i])
			size++;
	}
	size += size_sep * (j - 1);
	return (size);
}

static char		*fill_str(char **tab, char *sep, char *str)
{
	int	i;
	int	j;
	int	x;

	j = -1;
	x = -1;
	while (tab[++j] != NULL)
	{
		i = -1;
		while (tab[j][++i])
			str[++x] = tab[j][i];
		if (tab[j + 1] != NULL)
		{
			i = -1;
			while (sep[++i])
				str[++x] = sep[i];
		}
	}
	str[++x] = '\0';
	return (str);
}

char			*ft_tabjoin(char **tab, char *sep)
{
	char	*str;
	size_t	size;

	size = get_size(tab, sep);
	str = ft_strnew(size);
	return (fill_str(tab, sep, str));
}
