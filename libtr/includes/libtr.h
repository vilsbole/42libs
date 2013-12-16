/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:38:14 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 19:38:15 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTR_H
# define LIBTR_H

typedef struct	node
{
	unsigned int	key;
	struct node		*left;
	struct node		*right;
}				t_node;

t_node	*tr_new_node(unsigned int key);
void	tr_add_node(t_node **tree, unsigned int key);
int		tr_search_node(t_node *tree, unsigned int key);
int		tr_max_depth(struct node *node);
void	tr_print_tree(t_node *tree);
void	tr_print_reverse_tree(t_node *tree);
void	tr_clear_tree(t_node **tree);

#endif /* !LIBTR_H */
