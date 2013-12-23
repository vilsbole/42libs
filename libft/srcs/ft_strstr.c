/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:04:03 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/26 21:44:14 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		len1;
	size_t		len2;
	const char	*p1;
	const char	*p2;

	if (s2 == NULL)
		return ((char *)s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p1 = s1;
	p2 = s2;
	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (&((char *)p1)[i]);
	while (i < len1)
	{
		if (ft_memcmp(&p1[i], p2, len2) == 0)
			return (&((char *) p1)[i]);
		i++;
	}
	return (NULL);
}
