#******************************************************************************#
#      #
# :::      ::::::::    #
#    Makefile   :+:      :+:    :+:    #
#     +:+ +:+ +:+      #
#    By: evilsbol <evilsbol@student.42.fr>  +#+  +:+       +#+ #
# +#+#+#+#+#+   +#+    #
#    Created: 2013/11/19 14:52:24 by evilsbol  #+#    #+#      #
#    Updated: 2013/12/10 15:12:45 by evilsbol ###   ########.fr#
#      #
#******************************************************************************#

# NORME COMPLIANT VARIABLES
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
AR = ar
ARFLAGS = -cvq
RM = rm
RMFLAGS = -rf

# Libtr Part I
SRCS = 	tr_add_node.c tr_clear_tree.c tr_print_reverse_tree.c \
	tr_new_node.c tr_print_tree.c	tr_search_node.c \
	tr_max_depth.c
# Libtr Part II
SRC2 = 	

NAME = libtr.a
SRCS += $(SRC2)
OBJS = $(SRCS:.c=.o)

# PERSONNAL VARIABLES
LPATH = -L./includes
LIBS = -ltr
HPATH = -I./includes
HEADERS = libtr.h
TEST = main.c
EXEC = a.out
TRASH = $(SRCS.c=.c~)
NOW := $(shell date +"%c" | tr ' :' '_')

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)

# Norme compliant rules
$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@echo $(NAME) built

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ $(HPATH)

clean:
	@$(RM) $(RMFLAGS) $(OBJS) $(TRASH)
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

$(TEST): $(NAME)
	@$(CC) $(CFLAGS) $(TEST) $(NAME) $(HPATH) -o $(EXEC)

run: re
	@echo "\033[32mSTART TEST\n"
	@make $(TEST) && ./$(EXEC)
	@echo "\033[32m\nEND TEST"

# DO NOT DELETE THIS LINE -- make depends on it
