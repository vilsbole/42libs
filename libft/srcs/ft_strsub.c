/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 15:54:14 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/01 20:01:30 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strsub(const char *s1, unsigned int start, size_t len)
{
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(str) * (len + 1));
	if (str)
	{
		ft_memcpy(str, s1 + start, len);
		str[len] = '\0';
	}
	return (str);
}
