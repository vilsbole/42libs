/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 19:41:51 by evilsbol          #+#    #+#             */
/*   Updated: 2014/02/21 19:46:08 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int		lst_length(t_list **list)
{
	int		len;
	t_list	*current;

	len = 0;
	current = *list;
	while (current)
	{
		++len;
		current = current->next;
	}
	return (len);
}
