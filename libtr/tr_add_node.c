/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_add_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:41:12 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 19:41:17 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libtr.h"

void	tr_add_node(t_node **tree, unsigned int key)
{
	t_node	*tmp_node;
	t_node	*tmp_tree;
	t_node	*elem;

	tmp_tree = *tree;
	if (!(elem = tr_new_node(key)))
		return ;
	if (!tmp_tree)
		*tree = elem;
	while (tmp_tree)
	{
		tmp_node = tmp_tree;
		if (key > tmp_tree->key)
		{
			tmp_tree = tmp_tree->right;
			if (!tmp_tree)
				tmp_node->right = elem;
		}
		else
		{
			tmp_tree = tmp_tree->left;
			if (!tmp_tree)
				tmp_node->left = elem;
		}
	}
}
