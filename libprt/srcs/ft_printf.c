/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:48:27 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:48:28 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

static int		ft_chooseprint(va_list ap, char c)
{
	if (c == 'c')
		return (ft_printchar(ap));
	else if (c == 's')
		return (ft_printstr(ap));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(ap));
	else if (c == 'u')
		return (ft_printunsigned(ap));
	else if (c == 'o')
		return (ft_printoctal(ap));
	else if (c == 'x')
		return (ft_printhexa(ap));
	else if (c == 'p')
		return (ft_printvoid(ap));
	else if (c == '%')
		return (ft_putchar(c));
	return (0);
}

int				ft_printf(char const *s, ...)
{
	int			i;
	int			len;
	va_list		ap;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_chooseprint(ap, s[i + 1]);
			i++;
		}
		else if (s[i] != '%')
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
