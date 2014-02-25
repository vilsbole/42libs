/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:38:14 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:57:49 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	lst_print_b(t_list *list)
{
	t_list		*current;

	if (!list)
		return ;
	current = list;
	while (current)
		current = current->next;
	while (current)
	{
		ft_printf("%s\n", current->content);
		current = current->prev;
	}
}
