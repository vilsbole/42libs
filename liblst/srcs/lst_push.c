/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:47:00 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:59:21 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int		lst_push(t_list **list, t_list *elem)
{
	if (!list || !(*list))
		*list = elem;
	else
	{
		elem->prev = NULL;
		elem->next = *list;
		(*list)->prev = elem;
		*list = elem;
	}
	return (1);
}
