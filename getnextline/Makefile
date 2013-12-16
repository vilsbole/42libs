#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/09 14:39:48 by evilsbol          #+#    #+#              #
#    Updated: 2013/12/09 16:40:56 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# NORME COMPLIANT VARIABLES
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
AR = ar
ARFLAGS = -cvq
RM = rm
RMFLAGS = -rf

NAME = get_next_line
SRCS = get_next_line.c test.c
OBJS = $(SRCS:.c=.o)


# PERSONNAL VARIABLES
LPATH = -Llibft
LIBS = -lft
HPATH = -Ilibft/includes
HEADERS = get_next_line.h

EXEC = test_gnl
NOW := $(shell date +"%c" | tr ' :' '_')

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(HPATH) -c $(SRCS)
	$(CC) $(CFLAGS) $(LPATH) $(LIBS) $(OBJS) -o $(EXEC)
	gcc -o test_gnl get_next_line.o test.o -L libft/ -lft

lib:
	make -C libft/ fclean
	make -C libft

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ $(HPATH)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@$(RM) $(RMFLAGS) $(NAME) $(EXEC)
	@echo archive and executable files removed

re: fclean
	@make all

run:
	@make all
	@./test_gnl cmp.txt
