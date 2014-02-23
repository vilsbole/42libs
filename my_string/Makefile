##
## Makefile for my_string in /home/epitech/c/my_string
##
## Made by claude ramseyer
## Login   <ramsey_c@epitech.net>
##
## Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
## Last update mon Oct 31 10:00:01 2011 claude ramseyer
##

LIB=	libmy_string.a
LIBDIR=	../lib
HEAD=	my_string.h
HEADDIR=../include
CC=	gcc
RM=	rm -f
CP=	cp
OBJ=	$(SRC:.c=.o)
SRC=	my_atoi.c \
	my_isalnum.c \
	my_isdigit.c \
	my_itoa.c \
	my_memcpy.c \
	my_memset.c \
	my_putchar.c \
	my_putstr.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_strlen.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strndup.c \
	my_strnrev.c \
	my_strrepeat.c \
	my_strrev.c \
	my_strstr.c \
	my_tolower.c \
	my_toupper.c \
	my_trim.c \
	nl.c

all: $(LIB) install

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

install:
	$(CP) $(LIB) $(LIBDIR)
	$(CP) $(HEAD) $(HEADDIR)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)
