# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 14:54:09 by mizusato          #+#    #+#              #
#    Updated: 2025/05/16 15:57:21 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= weapon

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address

SRC_DIR		= srcs/
OBJ_DIR		= objs/
INC_DIR		= includes/

SRC_FILES	= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ_FILES	= $(SRC_FILES:.cpp=.o)

SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE)Deleting all objects from /ex03...$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Deleting $(NAME) from /ex03...$(RESET)"

re: fclean all

.PHONY: all clean fclean re
