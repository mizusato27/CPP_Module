# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 03:40:22 by mizusato          #+#    #+#              #
#    Updated: 2025/05/03 16:05:33 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = megaphone
CXX       = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC      = megaphone.cpp
OBJ      = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
