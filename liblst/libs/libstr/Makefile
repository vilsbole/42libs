#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 19:38:04 by evilsbol          #+#    #+#              #
#    Updated: 2014/01/14 19:38:33 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# PROJECT VARIABLES
NAME = $(LIBA)
LIBA = libstr.a
TEST =

LPATH = -L./ -lstr

HPATH = -Iincludes\

SRCS = ft_strlen.c ft_strdup.c ft_strcpy.c

# STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror -g -pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

ifeq (run,$(firstword $(MAKECMDGOALS)))
  ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  $(eval $ARGS):;@:)
endif

# COLORS
DARK	= \033[1;32m
CYAN	= \033[1;36m
YELLOW	= \033[38;5;3m
RED		= \033[1;31m
WHITE	= \033[0m
NO_COLOR	= \x1b[0m
OK_COLOR	= \x1b[32;01m
ERROR_COLOR	= \x1b[31;01m
WARN_COLOR	= \x1b[33;01m

# MAKEHELP
LOADING = ./makehelp/loading

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)
	@echo "$(WHITE)$(YELLOW)$(NAME) built!$(WHITE)"

$(NAME): $(OBJS)
	@echo "$(YELLOW)linking project lib...$(DARK)"
	@$(AR) $@ $^
	@ranlib $@

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) $(HPATH) -o $@ -c $^

clean:
	@echo "$(YELLOW)removing objs...$(WHITE)"
	@$(RM) $(OBJDIR)

fclean: clean
	@echo "$(YELLOW)removing binary and libs...$(WHITE)"
	@$(RM) $(NAME) $(LIBA)

re: fclean
	@make all

# Personnal rules
start:
	@mkdir libs
	@cp -rf ~/Dropbox/Projects/42libs/libft ./libs/
	@cp -rf ~/Dropbox/Projects/42libs/libprt ./libs/
	@mkdir ./srcs
	@mkdir ./includes
	@git init

save:
	@git add --all
	@git commit -m 'saving $(NOW)'
	@echo "$(YELLOW)all files added and commited$(WHITE)"

run:
	@make all
	@echo "$(YELLOW)TEST BEGIN\n $(WHITE)"
	@./$(NAME) $(ARGS)
	@echo "$(YELLOW) \nTEST END $(WHITE)"

# DO NOT DELETE THIS LINE -- make depends on it
