/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 20:23:13 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/08 20:50:26 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = NULL;
	if (!(ret = (t_list *) ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		ret->content = NULL;
		ret->content_size = 0;
	}
	if (content)
	{
		if (!(ret->content = (t_list *) ft_memalloc(content_size)))
		{
			ft_memdel((void **) &ret);
			return (NULL);
		}
		ret->content = ft_memcpy(ret->content, content, content_size);
		ret->content_size = content_size;
	}
	ret->next = NULL;
	return (ret);
}
