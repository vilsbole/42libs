/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_search.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:41:07 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:44:04 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

char	*lst_search(t_list *list, int key)
{
	t_list	*current;

	if (list && key)
		current = list;
	while (list && current)
	{
		if (current->key == key)
			return (current->content);
		current = current->next;
	}
	return (NULL);
}
