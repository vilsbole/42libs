/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:49:41 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:59:40 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int		lst_append(t_list **list, t_list *elem)
{
	t_list		*current;

	if (!(*list && elem))
		return (0);
	else
	{
		current = *list;
		while (current->next)
			current = current->next;
		current->next = elem;
		elem->prev = current;
	}
	return (1);
}
