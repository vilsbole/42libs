/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 19:24:48 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/29 19:38:58 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t		i;
	size_t		len;
	char		*str;

	if (s && f)
	{
		len = ft_strlen(s);
		str = ft_memalloc(len);
		i = 0;
		while (i < len && s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
