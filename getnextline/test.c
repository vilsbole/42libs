/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 20:14:38 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/16 20:14:45 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main()
{
    char    *s;
    int     status;

    while ((status = get_next_line(-1, &s)) > 0)
    {
        printf("[%s]\n", s);
        free(s);
    }
    printf("%d\n", status);
    return (0);
}
