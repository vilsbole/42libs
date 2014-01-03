/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 19:25:45 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/29 19:38:10 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*str;

	if (s && f)
	{
		len = ft_strlen(s);
		str = ft_memalloc(len);
		i = 0;
		while (i < len && s[i] && str)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
