/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 19:36:26 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/08 19:40:03 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libprt.h"

void	ft_putnbr_fd(int fd, int n)
{
	if (n == -2147483648)
		ft_putstr_fd(fd, "-2147483648");
	else if (n < 0)
	{
		ft_putchar_fd(fd, '-');
		ft_putnbr_fd(fd, n * -1);
	}
	else if (n < 10)
		ft_putchar_fd(fd, n + '0');
	else
	{
		ft_putnbr_fd(fd, n / 10);
		ft_putchar_fd(fd, (n % 10) + '0');
	}
}
