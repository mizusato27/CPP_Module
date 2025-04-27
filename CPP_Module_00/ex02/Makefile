# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 11:09:00 by mizusato          #+#    #+#              #
#    Updated: 2025/04/27 11:10:47 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account_sim

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR		= srcs/
OBJ_DIR		= objs/
INC_DIR		= includes/

SRC_FILES	= tests.cpp Account.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CPPFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
