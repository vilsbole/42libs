/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:45:16 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/29 15:53:27 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		if ((*tmp1++ = *tmp2++) == c)
			return (tmp1);
		i++;
	}
	return (NULL);
}
