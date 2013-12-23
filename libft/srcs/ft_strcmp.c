/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:48:58 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/01 19:28:23 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		n;
	int		len1;
	int		len2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 >= len2)
		n = len1;
	else
		n = len2;
	return (ft_memcmp(s1, s2, n));
}
