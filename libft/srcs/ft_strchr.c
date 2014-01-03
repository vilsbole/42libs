/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:03:06 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/25 17:59:35 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		target;
	size_t		i;

	target = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == target)
			return ((char *)s + i);
		i++;
	}
	if (target == '\0')
		return ((char *)s + i);
	else
		return (NULL);
}
