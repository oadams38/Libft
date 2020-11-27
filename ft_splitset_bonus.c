/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitset_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:26:53 by oadams            #+#    #+#             */
/*   Updated: 2020/11/27 09:26:55 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static int	is_sep(char c, char *separators)
{
	int	i;

	i = -1;
	while (separators[++i])
	{
		if (separators[i] == c)
			return (1);
	}
	return (-1);
}

static int	get_n_words(char const *s, char *separators)
{
	int	i;
	int	wassep;
	int	nb_words;

	i = -1;
	nb_words = 0;
	wassep = 1;
	while (s[++i])
	{
		if (is_sep(s[i], separators) == -1 && wassep == 1)
			nb_words++;
		wassep = is_sep(s[i], separators);
	}
	return (nb_words);
}

static char	**fillsplit(char **split, char const *s, char *separators)
{
	int		i;
	size_t	j;
	int		k;
	int		wassep;

	i = -1;
	k = 0;
	wassep = 1;
	while (s[++i])
	{
		j = 0;
		if (is_sep(s[i], separators) == -1 && wassep == 1)
		{
			while (s[j + i] && is_sep(s[i + j], separators) == -1)
				j++;
			split[k++] = ft_substr(s, i, j);
			j--;
		}
		i += j;
		wassep = is_sep(s[i], separators);
	}
	split[k] = NULL;
	return (split);
}

char		**ft_splitset(char const *str, char *set)
{
	char	**split;
	int		n_words;

	n_words = get_n_words(str, set);
	split = ft_calloc(n_words + 1, sizeof(char*));
	return (fillsplit(split, str, set));
}
