#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/16 19:38:04 by evilsbol          #+#    #+#              #
#    Updated: 2013/12/16 19:38:06 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# PERSONNAL VARIABLES
LIBS = -L./ 
HEAD = -Iincludes
TEST = main.c
EXEC =
NAME = libpip.a
SRCS =

# NORME COMPLIANT VARIABLES
CC = gcc -Wall -Wextra -Werror -pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

# START RULES
.PHONY: depend clean fclean re build run save

all: lib $(EXEC)

$(EXEC): $(NAME)
	@$(CC) -o $(EXEC) $(TEST) $(LIBS) $(HEAD) 

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@ranlib $@

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@$(CC) -o $@ -c $^ $(HEAD) 

lib:
	@make -C

clean:
	@$(RM) $(OBJS)
	@echo object files removed

fclean: clean
	@$(RM) $(NAME) $(EXEC)
	@echo archive and executable files removed

re: fclean
	@make all

# Personnal rules
save:
	@git add --all
	@git commit -m 'saving $(NOW)'
	@echo all files added and commited

run:
	@echo "\033[32mSTART TEST\n"
	@make $(TEST) && ./$(EXEC)
	@echo "\033[32m\nEND TEST"

# DO NOT DELETE THIS LINE -- make depends on it
 	