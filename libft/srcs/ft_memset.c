/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:21:31 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/02 19:53:22 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*tmp_ptr;
	unsigned char	tmp_char;

	tmp_char = (unsigned char) c;
	tmp_ptr = (char *) b;
	i = 0;
	if (tmp_ptr == NULL)
		return (0);
	else
	{
		while (i < len)
		{
			tmp_ptr[i] = tmp_char;
			i++;
		}
		return (b);
	}
}
