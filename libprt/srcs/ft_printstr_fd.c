/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:27 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:49:29 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printstr_fd(int fd, va_list ap)
{
	char	*str;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		ft_putstr_fd(fd, "(null)");
		return (6);
	}
	ft_putstr_fd(fd, str);
	return (ft_strlen(str));
}
