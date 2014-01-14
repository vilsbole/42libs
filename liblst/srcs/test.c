/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 19:00:50 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/14 19:02:04 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int		main(int argc, char **argv)
{
	t_list		*head;

	if (argc <= 1)
		printf("usage: ./lst <arg1> <arg2> <...>");
	head = lst_argv(argc, argv);
	lst_print_f(head);
	lst_print_b(head);
	lst_clear(&head);
	return (0);
}
