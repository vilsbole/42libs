/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:57:42 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/02 21:47:16 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (!*str1)
			break ;
		str1++;
		str2++;
	}
	return (0);
}
