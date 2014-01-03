/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:59:11 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/08 19:15:55 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	ft_bzero(s1, n);
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
