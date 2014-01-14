/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:35:26 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:57:06 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	lst_print_f(t_list *list)
{
	t_list		*current;

	if (!list)
		return ;
	current = list;
	while (current)
	{
		printf("%s\n", current->content);
		current = current->next;
	}
}
