/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c         				                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 19:36:48 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/10 19:45:58 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

int		get_next_line(int const fd, char **line)
{
	int			bytes_read;
	char		buff[BUFF_SIZE + 1];
	static char	*save_buff = NULL;

	if (save_buff && cut_at_line(&save_buff, line))
		return (1);
	while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		save_buff = join(save_buff, buff);
		if (cut_at_line(&save_buff, line))
			return (1);
	}
	if (bytes_read <= 0)
		return (-1);
	if (save_buff && *save_buff)
	{
		*line = ft_strdup(save_buff);
		ft_strdel(&save_buff);
		return (1);
	}
	return (0);
}

char	*join(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = (s1) ? ft_strlen(s1) : 0;
	len2 = ft_strlen(s2);
	result = ft_strnew(len1 + len2);
	if (result)
	{
		if (s1)
			ft_memcpy(result, s1, len1);
		ft_memcpy(result + len1, s2, len2);
	}
	if (s1)
		ft_strdel(&s1);
	return (result);
}

int		cut_at_line(char **save_buff, char **line)
{
	char	*limit;

	if ((limit = ft_strchr(*save_buff, '\n')))
	{
		*line = ft_strsub(*save_buff, 0, limit - *save_buff);
		ft_strcpy(*save_buff, limit + 1);
		return (1);
	}
	return (0);
}
