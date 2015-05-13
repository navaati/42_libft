#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/22 01:03:56 by lgillot-          #+#    #+#              #
#    Updated: 2015/05/13 19:40:51 by lgillot-         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o \
	ft_memcmp.o ft_strcpy.o ft_strlen.o ft_strdup.o ft_strncpy.o ft_strcat.o \
	ft_strncat.o ft_strnlen.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o \
	ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_isspace.o ft_isdigit.o ft_atoi.o \
	ft_islower.o ft_isupper.o ft_isalpha.o ft_isalnum.o ft_isascii.o \
	ft_isprint.o ft_tolower.o ft_toupper.o ft_memalloc.o ft_memdel.o \
	ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o \
	ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o \
	ft_strsplit.o ft_itoa.o ft_putchar_fd.o ft_putchar.o ft_putstr_fd.o \
	ft_putstr.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $+

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re:
	$(MAKE) fclean
	$(MAKE) all
