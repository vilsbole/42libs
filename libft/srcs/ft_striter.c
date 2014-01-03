/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 18:43:30 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/29 19:01:30 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t		i;
	size_t		len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len && s[i])
		{
			f(&s[i]);
			i++;
		}
	}
	return ;
}
