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

NAME = $(LIBA)
LIBA = 	libgnl.a

LIBS =	-L./ -lgnl

HPATH = -I./includes \
		-I../libft/includes \
		-I../libprt/includes

SRCS = gnl.c

# STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror -g #-pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

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
save:
	@git add --all
	@git commit -m 'saving $(NOW)'
	@echo all files added and commited

# DO NOT DELETE THIS LINE -- make depends on it
