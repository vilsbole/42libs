/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:13:57 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 19:42:02 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstr.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		len;

	len = ft_strlen(str);
	if ((cpy = (char *)malloc(sizeof(char) * len + 1)))
		return (ft_strcpy(cpy, str));
	else
		return (NULL);
}
