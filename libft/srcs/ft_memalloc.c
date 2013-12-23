/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:35:50 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/09 16:01:17 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (!ptr)
			return (NULL);
		else
			ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}
