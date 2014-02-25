# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/12 18:15:52 by evilsbol          #+#    #+#              #
#    Updated: 2014/02/12 18:15:56 by evilsbol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=

.PHONY: all libdep clean fclean re 

all: libdep $(NAME)

$(NAME):

libdep:
	@make -C libft
	@make -C libprt
	@make -C libgnl
	@make -C libtr
	@make -C liblst

clean:
	@make -C libft clean
	@make -C libprt clean
	@make -C libgnl clean
	@make -C libtr clean
	@make -C liblst clean

fclean:
	@make -C libft fclean
	@make -C libprt fclean
	@make -C libgnl fclean
	@make -C libtr fclean
	@make -C liblst fclean

re:
	@make -C libft re
	@make -C libprt re
	@make -C libgnl re
	@make -C libtr re
	@make -C liblst re