/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoctal_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:15 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:49:16 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printoctal_fd(int fd, va_list ap)
{
	char			*p;
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	p = ft_otoa(c);
	ft_putstr_fd(fd, p);
	return (ft_strlen(p));
}
