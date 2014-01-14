/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 18:25:00 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 18:33:57 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H

# include "libstr.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int				key;
	char			*content;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

t_list		*lst_argv(int argc, char **argv);
t_list		*lst_new_elem(int key, char *content);
int			lst_push(t_list **list, t_list *elem);
int			lst_append(t_list **list, t_list *elem);
char		*lst_search(t_list *list, int key);
void		lst_print_f(t_list *list);
void		lst_print_b(t_list *list);
void		lst_clear(t_list **list);

#endif /* !LIBLST_H */
