/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:02:43 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/25 19:05:14 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		target;
	int			i;

	if (s == NULL)
		return (0);
	else
	{
		target = ((char) c);
		i = ft_strlen(s);
		while (i > -1)
		{
			if (s[i] == target)
				return ((char *) s + i);
			i--;
		}
	}
	return (0);
}
