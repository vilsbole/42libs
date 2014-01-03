/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:06 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:49:07 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printnbr(va_list ap)
{
	int		c;
	char	*p;

	c = va_arg(ap, int);
	p = ft_itoa(c);
	ft_putstr(p);
	return (ft_strlen(p));
}
