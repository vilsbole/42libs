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
LIBA = libprt.a

LPATH = -L./ -lprt
HPATH = -Iincludes
SRCS = $(SRC1) $(SRC2) $(SRC3) $(EXTRA)

# Libptr Part I
SRC1 =	ft_htoa.c ft_itoa.c ft_otoa.c ft_utoa.c \
		ft_putchar.c ft_putint.c ft_putstr.c ft_putnbr.c ft_strlen.c \
		ft_printchar.c ft_printhexa.c ft_printnbr.c ft_printoctal.c \
		ft_printstr.c ft_printunsigned.c ft_printvoid.c

SRC2 =	ft_putchar_fd.c ft_putint_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
		ft_printchar_fd.c ft_printhexa_fd.c ft_printnbr_fd.c ft_printoctal_fd.c \
		ft_printstr_fd.c ft_printunsigned_fd.c ft_printvoid_fd.c

SRC3 = ft_printf.c ft_printf_fd.c ft_fatal.c

EXTRA = ft_quit.c

# STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror -g #-pedantic
AR = ar -cvq
RM = rm -rf
SRCDIR = srcs
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
NOW := $(shell date +"%c" | tr ' :' '_')

# COLORS
DARK	= \033[1;32m
CYAN	= \033[1;36m
YELLOW	= \033[38;5;3m
RED		= \033[1;31m
WHITE	= \033[0m

# MAKEHELP
LOADING = ./makehelp/loading

# START RULES
.PHONY: all depend clean fclean re build run save

all: $(NAME)
	
$(NAME): $(OBJS)
	@echo "$(YELLOW)linking project lib...$(DARK)"
	@$(AR) $@ $^
	@ranlib $@
	@echo "$(WHITE)$(YELLOW)$(NAME) built$(WHITE)\n"
	
$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) $(HPATH) -o $@ -c $^

clean:
	@echo "$(YELLOW)removing $(OBJDIR)...$(WHITE)"
	@$(RM) $(OBJDIR)

fclean: clean
	@echo "$(YELLOW)removing $(NAME)...$(WHITE)"
	@$(RM) $(NAME)

re: fclean
	@make all

# Personnal rules
save:
	@git add --all
	@git commit -m 'saving $(NOW)'
	@echo "$(YELLOW)all files added and commited$(WHITE)"

run:
	@make all
	@echo "$(YELLOW)TEST BEGIN\n $(WHITE)"
	@./$(NAME) $(TEST)
	@echo "$(YELLOW) \nTEST END $(WHITE)"

# DO NOT DELETE THIS LINE -- make depends on it
