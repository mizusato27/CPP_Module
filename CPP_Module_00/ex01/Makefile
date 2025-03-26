# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/23 20:57:03 by mizusato          #+#    #+#              #
#    Updated: 2025/03/26 20:12:34 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_DIR		= srcs/
OBJ_DIR		= objs/
INC_DIR		= includes/

SRC_FILES	= main.cpp Contact.cpp PhoneBook.cpp
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
