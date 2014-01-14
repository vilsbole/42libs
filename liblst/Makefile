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
NAME = main
LIBA = liblst.a
TEST = 
LIBDEP = ./libs/libstr

LPATH = -L./ -llst\
		-L./libs/libstr -lstr

HPATH = -Iincludes\
		-Ilibs/libstr/includes

SRCS =  lst_print_f.c lst_print_b.c lst_search.c lst_new_elem.c\
		lst_push.c lst_append.c lst_clear.c lst_argv.c\
		test.c

# STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror -g -pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

#ifeq (run,$(firstword $(MAKECMDGOALS)))
 # ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
 # $(eval $ARGS):;@:)
#endif

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

all: libdep $(NAME)
	@echo "$(WHITE)$(YELLOW)ready to rumble!$(WHITE)"

$(NAME): $(LIBA)
	@echo "$(YELLOW)building binary...$(RED)"
	@$(CC) -o $(NAME) $(LPATH) $(HPATH)
	
$(LIBA): $(OBJS)
	@echo "$(YELLOW)linking project lib...$(DARK)"
	@$(AR) $@ $^
	@ranlib $@
	@echo "$(WHITE)$(YELLOW)$(LIBA) built$(WHITE)\n"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) $(HPATH) -o $@ -c $^

libdep:
	@make -C $(LIBDEP)

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
	@./$(NAME) one two three four five six
	@echo "$(YELLOW) \nTEST END $(WHITE)"

# DO NOT DELETE THIS LINE -- make depends on it
