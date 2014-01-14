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
NAME = libft.a
TEST = 
LIBA =

LPATH = -L./ -lprt
HPATH = -Iincludes
SRCS = $(SRC1) $(SRC2) $(SRC3) $(SRC4)

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
# Libft Bonus
SRC3 =	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
#		ft_lstmap.c

# Personnal rules
SRC4 =	ft_strjoin3.c

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
.PHONY: depend clean fclean re build run save

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
	@echo "$(YELLOW)removing objs...$(WHITE)"
	@$(RM) $(OBJDIR)

fclean: clean
	@echo "$(YELLOW)removing binary and libs...$(WHITE)"
	@$(RM) $(NAME) $(LIBA)

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
