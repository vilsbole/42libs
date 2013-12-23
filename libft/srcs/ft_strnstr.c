/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 17:08:14 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/27 17:17:52 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s2);
	if (!s2)
		return ((char *)s1);
	while (((i + len) <= n) && *s1)
	{
		if (ft_memcmp(s1, s2, len) == 0)
			return (char *)(s1);
		s1++;
		i++;
	}
	return (NULL);
}
