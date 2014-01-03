/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tr_max_depth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 20:14:54 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/15 20:29:49 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libtr.h"

int		tr_max_depth(struct node *node)
{
	int		ldepth;
	int		rdepth;
	int		result;

	if (node == NULL || (node->right == NULL && node->left == NULL))
		return (0);
	else
	{
		ldepth = tr_max_depth(node->left);
		rdepth = tr_max_depth(node->right);
		result = ldepth > rdepth ? ldepth + 1 : rdepth + 1;
		return (result);
	}
}
