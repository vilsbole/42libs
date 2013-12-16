/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_search_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 19:42:25 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 19:42:26 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libtr.h"

int		tr_search_node(t_node *tree, unsigned int key)
{
	while (tree)
	{
		if (key == tree->key)
			return (1);
		else (key > tree->key)? (tree = tree->right) : (tree = tree->left);
	}
	return (0);
}
