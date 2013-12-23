/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:39 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:49:40 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpt.h"

int		ft_printunsigned(va_list ap)
{
	char			*p;
	unsigned int 	c;

	c = va_arg(ap, unsigned int);
	p = ft_utoa(c);
	ft_putstr(p);
	return (ft_strlen(p));
}
