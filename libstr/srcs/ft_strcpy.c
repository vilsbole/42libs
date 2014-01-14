/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:30:30 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 19:36:03 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	if (!(dst && src))
		return (NULL);
	while (dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
