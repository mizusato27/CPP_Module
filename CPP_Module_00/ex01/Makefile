# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/23 20:57:03 by mizusato          #+#    #+#              #
#    Updated: 2025/03/24 03:40:06 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR		= srcs/
OBJ_DIR		= objs/
INC_DIR		= includes

SRCS		= $(addprefix $(SRC_DIR), )
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%o.:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

