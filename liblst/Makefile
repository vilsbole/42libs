#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 19:38:04 by evilsbol          #+#    #+#              #
#    Updated: 2014/01/08 17:20:16 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# PROJECT VARIABLES
NAME = $(LIBA)
LIBA = liblst.a

HPATH = -I./includes \
		-I../libprt/includes \
		-I../libft/includes

SRCS =  lst_print_f.c lst_print_b.c lst_search.c lst_new_elem.c \
		lst_new_list.c lst_length.c\
		lst_push.c lst_append.c lst_clear.c lst_argv.c \

# STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror -g -pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

ifeq (run,$(firstword $(MAKECMDGOALS)))
 RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
 $(eval $RUN_ARGS):;@:)
endif

# COLORS
RESET=		\033[0m
DARK=		\033[1;32m
RED=		\033[31m
GREEN=		\033[32m
YELLOW=		\033[33m
BLUE=		\033[34m
MAGENTA=	\033[35m
CYAN=		\033[36m
WHITE=		\033[37m
BOLDBLACK=	\033[1m\033[30m
BOLDRED=	\033[1m\033[31m
BOLDWHITE=	\033[1m\033[37m

# MAKEHELP
LOADING = ./makehelp/loading

# START RULES
.PHONY: all depend clean fclean re build run save

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)linking project lib...$(DARK)"
	@$(AR) $@ $^
	@ranlib $@
	@echo "$(RESET)$(YELLOW)$(LIBA) built$(RESET)\n"
	
$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) $(HPATH) -o $@ -c $^

clean:
	@echo "$(YELLOW)removing objs...$(RESET)"
	@$(RM) $(OBJDIR)

fclean: clean
	@echo "$(YELLOW)removing binary and libs...$(RESET)"
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
	@./$(NAME) $(RUN_ARGS)
	@echo "$(YELLOW) \nTEST END $(WHITE)"

# DO NOT DELETE THIS LINE -- make depends on it
