# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 03:40:22 by mizusato          #+#    #+#              #
#    Updated: 2025/03/19 03:50:33 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = megaphone
CC       = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC      = megaphone.cpp
OBJ      = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
