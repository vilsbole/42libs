/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:56:56 by evilsbol          #+#    #+#             */
/*   Updated: 2014/02/05 18:21:16 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src1;
	const char	*src2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	src1 = s1;
	src2 = s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return ((unsigned char) src1[i] - (unsigned char) src2[i]);
		i++;
	}
	return (0);
}
