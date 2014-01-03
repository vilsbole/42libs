/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:00:07 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/27 14:22:14 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src;
	char		*dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	src = s2;
	dst = s1;
	if (dst > src)
	{
		i = n;
		while (i > 0 )
		{
			dst[i - 1] = src [i - 1];
			i--;
		}
	}
	else if (dst < src)
		ft_memcpy(dst, src, n);
	return (s1);
}
