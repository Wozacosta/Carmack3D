# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/15 20:29:49 by srabah-m          #+#    #+#              #
#    Updated: 2014/01/15 20:32:13 by srabah-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC=gcc
CFLAGS=-Wextra -Wall -Werror
INC=-I ./includes
LDFLAGS=-L./ -lft
SRCS=ft_atoi.c              \
	ft_bzero.c \
	ft_isalnum.c               \
	ft_isalpha.c              \
	ft_isascii.c             \
	ft_isdigit.c             \
	ft_isprint.c              \
	ft_itoa.c              \
	ft_memalloc.c              \
	ft_memccpy.c              \
	ft_memchr.c              \
	ft_memcmp.c             \
	ft_memcpy.c              \
	ft_memdel.c             \
	ft_memmove.c             \
	ft_memset.c              \
	ft_putchar_fd.c             \
	ft_putchar.c              \
	ft_putendl_fd.c             \
	ft_putendl.c              \
	ft_putnbr_fd.c             \
	ft_putnbr.c                \
	ft_putstr_fd.c             \
	ft_putstr.c             \
	ft_strcat.c             \
	ft_strchr.c             \
	ft_strclr.c             \
	ft_strcmp.c             \
	ft_strcpy.c             \
	ft_strdel.c    \
	ft_strequ.c    \
	ft_strdup.c    \
	ft_striter.c    \
	ft_striteri.c    \
	ft_strjoin.c    \
	ft_strlcat.c    \
	ft_strlen.c    \
	ft_strmap.c    \
	ft_strmapi.c    \
	ft_strncat.c    \
	ft_strncmp.c    \
	ft_strncpy.c    \
	ft_strnequ.c    \
	ft_strnew.c    \
	ft_strnstr.c    \
	ft_strrchr.c    \
	ft_strsplit.c    \
	ft_strstr.c    \
	ft_strsub.c    \
	ft_strtrim.c    \
	ft_tolower.c    \
	ft_toupper.c    \
	ft_lstnew.c      \
	ft_lstdelone.c     \
	ft_lstdel.c    \
	ft_lstadd.c     \
	ft_lstiter.c    \
	ft_lstmap.c \
	ft_realloc.c \
	ft_min_int.c \
	ft_strncat_dyn.c  \
	ft_putstr_width.c \
	ft_putnbr_width.c \
	ft_swap.c ft_abs.c ft_max.c ft_min.c ft_error.c
OBJS = $(SRCS:.c=.o)
NAME=libft.a

all: $(NAME)
%.o: %.c
	$(CC) -o $@ -c $< $(CDFLAGS) $(INC)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
