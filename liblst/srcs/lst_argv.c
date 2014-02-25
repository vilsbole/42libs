/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_argv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:03:08 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 19:06:17 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_list		*lst_argv(int argc, char **argv)
{
	int		i;
	char	*content;
	t_list	*elem;
	t_list	*head;

	i = 1;
	head = NULL;
	while (i < argc)
	{
		content = ft_strdup(argv[i]);
		if (content && (elem = lst_new_elem(i, NULL, content)))
		{
			if (head == NULL)
				head = elem;
			else
				lst_append(&head, elem);
		}
		else
		{
			free(content);
			return (NULL);
		}
		i++;
	}
	return (head);
}

