#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:52:24 by evilsbol          #+#    #+#              #
#    Updated: 2014/01/03 17:08:03 by evilsbol         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# NORME COMPLIANT VARIABLES
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
AR = ar
ARFLAGS = -cvq
RM = rm
RMFLAGS = -rf

NAME = libft.a
SRCDIR = srcs
SRCS = $(SRC1) $(SRC2) $(SRC3) $(SRC4)
OBJDIR = objs
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

LIBS = -lft
LPATH = -L./
HEADERS = libft.h
HPATH = -I./includes

# PERSONNAL VARIABLES
MAIN = test.c
EXEC = test

NOW := $(shell date +"%c" | tr ' :' '_')

# Libft Part I
SRC1 =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c
# Libft Part II
SRC2 =	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putendl.c ft_putchar.c ft_putstr.c ft_putnbr.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# Libft Bonus
SRC3 =	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
#		ft_lstmap.c

# Personnal rules
SRC4 =	ft_strjoin3.c

# START RULES
.PHONY: depend clean fclean re build run save

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@ranlib $@
	@echo $(NAME) built

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
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

$(MAIN): $(NAME)
	@$(CC) $(CFLAGS) $(TEST) $(NAME) $(HPATH) -o $(EXEC)

run:
	@echo "\033[32mSTART TEST\n"
	@make $(TEST) && ./$(EXEC)
	@echo "\033[32m\nEND TEST"

# DO NOT DELETE THIS LINE -- make depends on it
