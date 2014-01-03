/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:01:49 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/27 18:19:52 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i1;
	size_t	i2;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len1 = ft_strlen(s1);
	len2 = len1 + ft_strlen(s2);
	i1 = 0;
	i2 = ft_strlen(s1);
	while (i2 < len2)
	{
		s1[i2] = ((char *)s2)[i1];
		i1++;
		i2++;
	}
	s1[i2] = '\0';
	return (s1);
}
