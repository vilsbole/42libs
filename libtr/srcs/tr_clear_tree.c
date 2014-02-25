/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_clear_tree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:41:29 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 19:41:30 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libtr.h"

void	tr_clear_tree(t_node **tree)
{
	t_node		*tmp_tree;

	tmp_tree = *tree;
	if (!tree)
		return ;
	if (tmp_tree->left)
		tr_clear_tree(&tmp_tree->left);
	free(tmp_tree);
	if (tmp_tree->right)
		tr_clear_tree(&tmp_tree->right);
	*tree = NULL;
}
