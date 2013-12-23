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

# NORME COMPLIANT VARIABLES
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
AR = ar
ARFLAGS = -cvq
RM = rm
RMFLAGS = -rf

NAME = libpt.a
SRCDIR = srcs
OBJDIR = .objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

# PERSONNAL VARIABLES
LPATH = -L./
LIBS = -lpt
HPATH = -Iincludes
HEADERS = libpt.h

TEST = main.c
EXEC = a.out
NOW := $(shell date +"%c" | tr ' :' '_')

# Libtr Part I
SRCS = 	ft_htoa.c ft_itoa.c ft_otoa.c ft_utoa.c \
		ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c \
		ft_printchar.c ft_printhexa.c ft_printnbr.c ft_printoctal.c \
		ft_printstr.c ft_printunsigned.c ft_printvoid.c \
		ft_printf.c

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@echo $(NAME) built

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@$(CC) $(CFLAGS) -o $@ -c $^ $(HPATH) 

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

$(TEST): $(NAME)
	@$(CC) $(CFLAGS) -o $(EXEC) $(TEST) $(LPATH) $(LIBS) $(HPATH) 

run:
	@echo "\033[32mSTART TEST\n"
	@make $(TEST) && ./$(EXEC)
	@echo "\033[32m\nEND TEST"

# DO NOT DELETE THIS LINE -- make depends on it
 	