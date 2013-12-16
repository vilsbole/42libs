/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_print_tree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:42:16 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 19:42:17 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libtr.h"

void	tr_print_tree(t_node *tree)
{
	if (! tree)
		return ;
	if (tree->left)
		tr_print_tree(tree->left);
	printf("Key = %d\n", tree->key);
	if (tree->right)
		tr_print_tree(tree->right);
}
