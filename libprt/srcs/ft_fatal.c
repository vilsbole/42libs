/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 16:11:27 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/12 16:13:27 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

void	ft_fatal(char *binary)
{
	if (!binary)
		return ;
	ft_printf_fd(2, "\033[1;31m[usage:]\033[0m %s <arg1> <arg2> <...>\n"\
				, binary);
	exit(EXIT_SUCCESS);
}
