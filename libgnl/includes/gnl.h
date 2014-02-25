/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h 					                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 14:31:45 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/18 22:02:04 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"

# define BUFF_SIZE 8

char	*join(char *s1, char *s2);
int		cut_at_line(char **save_buff, char **line);
int		get_next_line(int const fd, char **line);

#endif /* !GNL_H */
