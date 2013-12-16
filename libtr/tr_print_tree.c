/* ************************************************************************** */
/*    */
/*:::      ::::::::   */
/*   tr_print_tree.c    :+:      :+:    :+:   */
/*    +:+ +:+ +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>  +#+  +:+       +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2013/12/11 19:51:23 by evilsbol  #+#    #+#     */
/*   Updated: 2013/12/11 19:54:12 by evilsbol ###   ########.fr       */
/*    */
/* ************************************************************************** */

#include	<libtr.h>
#include	<stdio.h>

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
