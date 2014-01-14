/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:44:28 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:46:47 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_list		*lst_new_elem(int key, char *content)
{
	t_list		*elem;

	elem = NULL;
	if ((elem = (t_list *)malloc(sizeof(t_list))))
	{
		elem->key = key;
		elem->content = content;
		elem->prev = NULL;
		elem->next = NULL;
	}
	return (elem);
}
