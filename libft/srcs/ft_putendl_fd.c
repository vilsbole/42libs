/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 18:16:42 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/29 18:18:04 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (s && fd && fd > 0 && fd < 1024 * 1024)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
	return ;
}
