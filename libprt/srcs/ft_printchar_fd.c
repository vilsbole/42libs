/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:48:11 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:48:12 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

int		ft_printchar_fd(int fd, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	ft_putchar_fd(fd, c);
	return (1);
}
