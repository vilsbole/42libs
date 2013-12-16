/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 20:15:17 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/08 20:19:31 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*new;
	t_list	*tmp;

	if (next)
	{
		next = lst;
		tmp = f(next);
		new = ft_lstnew(tmp->content, tmp->content_size);
		if (new)
		{
			next = next->next;
			while (next != NULL)
			{
				tmp = f(next);
				ft_lstaddend(&new, tmp);
				next = next->next;
			}
		}
		return (new);
	}
	return (NULL);
}
