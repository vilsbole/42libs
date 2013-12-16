/* ************************************************************************** */
/*    */
/*:::      ::::::::   */
/*   tr_print_reverse_tree.c    :+:      :+:    :+:   */
/*    +:+ +:+ +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>  +#+  +:+       +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2013/12/11 19:54:32 by evilsbol  #+#    #+#     */
/*   Updated: 2013/12/11 19:57:11 by evilsbol ###   ########.fr       */
/*    */
/* ************************************************************************** */

#include	<libtr.h>
#include	<stdio.h>

void	tr_print_reverse_tree(t_node *tree)
{
	if (! tree)
		return ;
	if (tree->right)
		tr_print_reverse_tree(tree->right);
	printf("key = %d\n", tree->key);
	if (tree->left)
		tr_print_reverse_tree(tree->left);
}
