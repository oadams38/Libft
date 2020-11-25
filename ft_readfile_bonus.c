/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:03:32 by oadams            #+#    #+#             */
/*   Updated: 2020/11/24 19:03:32 by oadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_readfile(char *path, int bs)
{
	int		fd;
	char	buf[bs];
	char	*str;
	size_t	len;
	int		ret;

	ret = bs;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (ret == bs)
	{
		if ((len += ret) && (ret = read(fd, buf, bs)) < 0)
			return (NULL);
	}
	ret = bs;
	if (close(fd) < 0 || (fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	while (ret == bs)
	{
		if ((ret = read(fd, buf, bs)) < 0)
			return (NULL);
		str = ft_strnew(len);
		ft_strncat(str, buf, ret);
	}
	return (str);
}
