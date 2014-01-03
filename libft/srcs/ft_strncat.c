/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:56:04 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/28 15:07:21 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	len1 = ft_strlen(s1);
	while (i < n && s2[i])
	{
		s1[len1] = ((char *)s2)[i];
		len1++;
		i++;
	}
	s1[len1] = '\0';
	return (s1);
}
