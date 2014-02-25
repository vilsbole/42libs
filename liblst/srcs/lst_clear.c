/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:52:31 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:54:31 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	lst_clear(t_list **list, int type)
{
	t_list		*current;
	t_list		*tmp;

	if (!*list)
		return ;
	current = *list;
	while (current)
	{
			tmp = current;
			current = current->next;
			if (type != 1 && tmp->content)
				free(tmp->content);
			free(tmp);
	}
	*list = NULL;
}
