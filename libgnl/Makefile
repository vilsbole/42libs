#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:52:24 by evilsbol          #+#    #+#              #
#    Updated: 2013/12/10 15:12:45 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# NORME COMPLIANT VARIABLES
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
AR = ar
ARFLAGS = -cvq
RM = rm
RMFLAGS = -rf

NAME = libgnl.a
SRCS = gnl.c
OBJS = $(SRCS:.c=.o)

LIBS = -lgnl -lft
LPATH = -L./
HEADERS = gnl.h
HPATH = -I./ -I../libft/includes

# PERSONNAL VARIABLES
NOW := $(shell date +"%c" | tr ' :' '_')

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@echo $(NAME) built

%.o: %.c
	@$(CC) $(CFLAGS) $(HPATH) -o $@ -c $<

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo object files removed

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME) $(EXEC)
	@echo archive and executable files removed

re: fclean
	@make all

# Personnal rules
save:
	@git add --all
	@git commit -m 'saving $(NOW)'
	@echo all files added and commited

# DO NOT DELETE THIS LINE -- make depends on it
