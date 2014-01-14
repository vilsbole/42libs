/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:52 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:49:54 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printvoid_fd(int fd, va_list ap)
{
	char			*p;
	unsigned long	c;

	ft_putstr_fd(fd, "0x");
	c = va_arg(ap, unsigned long);
	p = ft_htoa(c);
	ft_putstr_fd(fd, p);
	return (ft_strlen(p) + 2);
}
