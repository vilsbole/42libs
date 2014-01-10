/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 20:04:49 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/02 22:01:14 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_nbrlen(int n)
{
	int	i;
	int	nb;

	i = 0;
	nb = n;
	if (n == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return ((n < 0) ? i + 1 : i);
}

char		*ft_itoa(int n)
{
	int		val;
	int		len;
	char	*tmp;

	val = n;
	len = ft_nbrlen(n);
	tmp = ft_strnew(len);
	while (len--)
	{
		tmp[len] = (n < 0) ? (n % 10) * -1 + 48 : (n % 10) + 48;
		n /= 10;
	}
	if (val < 0)
		tmp[0] = '-';
	return (tmp);
}
