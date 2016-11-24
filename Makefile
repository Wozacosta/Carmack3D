#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/07 16:04:22 by qmuntada          #+#    #+#              #
#    Updated: 2016/11/21 21:32:42 by srabah-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d
CFLAGS = -Wall -Werror -Wextra
INCLUDES= -I includes/ -I libft/includes/ 
SRC = main.c events.c display.c get_next_line.c \
	  startup.c crash.c dfa.c clean.c manage_expose.c
OBJ = $(SRC:.c=.o)
mlx = minilibx_macos
lft = libft

all : $(NAME)

$(NAME) : $(ft) $(mlx)
	echo "Creating MAC executable $@ ..."
	make -C $(lft)
	make -C $(mlx)
	gcc $(FLAGS) $(INCLUDES) -c $(SRC)
	gcc -o $(NAME) $(OBJ) -L $(lft) -lft -L $(mlx) -lmlx -framework OpenGl -framework AppKit

libft:
	make -C libft fclean
	make -C libft

clean :
	echo "Removing object files ..."
	rm -f $(OBJ)

fclean : clean
	echo "Removing $(NAME) ..."
	rm -f $(NAME)

re : fclean all
