/* ************************************************************************** */
/*    */
/*:::      ::::::::   */
/*   tr_search_node.c   :+:      :+:    :+:   */
/*    +:+ +:+ +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>  +#+  +:+       +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2013/12/11 19:43:24 by evilsbol  #+#    #+#     */
/*   Updated: 2013/12/11 19:47:01 by evilsbol ###   ########.fr       */
/*    */
/* ************************************************************************** */

#include	<libtr.h>

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
