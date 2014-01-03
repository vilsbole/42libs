/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:43:19 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/27 18:48:46 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	int			tmp;
	int			num;

	if (str == NULL)
		return (0);
	num = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
					|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
			i++;
	if (str[i] == '+' || str[i] == '-')
		sign = (str[i++] == '-') ? -1 : 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		tmp = num;
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * sign);
}
