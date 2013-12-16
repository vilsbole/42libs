/* ************************************************************************** */
/*    */
/*:::      ::::::::   */
/*   tr_new_node.c      :+:      :+:    :+:   */
/*    +:+ +:+ +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>  +#+  +:+       +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2013/12/11 21:22:32 by evilsbol  #+#    #+#     */
/*   Updated: 2013/12/11 21:22:37 by evilsbol ###   ########.fr       */
/*    */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<libtr.h>

t_node *tr_new_node(unsigned int key)
{
	t_node	*elem;

	elem = (t_node *)malloc(sizeof(t_node));
	if (elem)
	{
		elem->key = key;
		elem->left = NULL;
		elem->right = NULL;
		return (elem);
	}
	return (NULL);
}
