/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:26:48 by oadams            #+#    #+#             */
/*   Updated: 2020/12/02 12:49:27 by oadams           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char sep)
{
	return (c == sep);
}

static int	get_n_words(char const *s, char c)
{
	int	i;
	int	wassep;
	int	nb_words;

	i = -1;
	nb_words = 0;
	wassep = 1;
	while (s[++i])
	{
		if (!is_sep(s[i], c) && wassep == 1)
			nb_words++;
		wassep = is_sep(s[i], c);
	}
	return (nb_words);
}

static char	**fillsplit(char **split, const char *s, char c)
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
		if (!is_sep(s[i], c) && wassep == 1)
		{
			while (s[j + i] && !is_sep(s[i + j], c))
				j++;
			split[k++] = ft_substr(s, i, j);
			j--;
		}
		i += j;
		wassep = is_sep(s[i], c);
	}
	split[k] = NULL;
	return (split);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		n_words;

	if (!s)
		return (NULL);
	n_words = get_n_words(s, c);
	if ((split = ft_calloc((n_words + 1), sizeof(char*))) == NULL)
		return (NULL);
	return (fillsplit(split, s, c));
}
