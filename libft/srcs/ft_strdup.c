/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:52:43 by evilsbol          #+#    #+#             */
/*   Updated: 2013/11/24 22:36:42 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		str_size;

	str_size = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(char) * str_size + 1);
	if (cpy != NULL)
	{
		ft_strcpy(cpy, s1);
		return (cpy);
	}
	else
		return (0);
}
