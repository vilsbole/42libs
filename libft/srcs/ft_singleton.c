/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_singleton.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 16:47:56 by evilsbol          #+#    #+#             */
/*   Updated: 2014/02/14 16:53:41 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		*ft_singleton(int init)
{
	static int	*sig = NULL;

	if (sig == NULL)
		sig = (int *)malloc(sizeof(int));
	if (init)
		*sig = init;
	return (sig);
}
