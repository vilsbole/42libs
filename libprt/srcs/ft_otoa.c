/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:47:59 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 19:48:01 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

char	*ft_otoa(unsigned int n)
{
	char			*p;
	int				size;
	unsigned int	x;

	x = n;
	size = 0;
	while (x > 7)
	{
		x = x / 8;
		size++;
	}
	p = (char *)malloc(sizeof(p) * (size + 1));
	if (p)
	{
		p[size + 1] = '\0';
		while (size >= 0)
		{
			x = n % 8;
			p[size] = 48 + x;
			n = n / 8;
			size--;
		}
	}
	return (p);
}
