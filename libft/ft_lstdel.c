/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 20:10:24 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/09 15:46:57 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*save;

	if (alst)
	{
		current = *alst;
		while (current)
		{
			del(current->content, current->content_size);
			save = current;
			current = current->next;
			free(save);
		}
		*alst = NULL;
	}
}
