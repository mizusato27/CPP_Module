# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 14:51:05 by mizusato          #+#    #+#              #
#    Updated: 2025/05/21 15:21:43 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harl

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC_DIR		= srcs/
OBJ_DIR		= objs/
INC_DIR		= includes/

SRC_FILES	= Harl.cpp main.cpp
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
	@echo "$(BLUE)Deleting all objects from /ex05...$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Deleting $(NAME) from /ex05...$(RESET)"

re: fclean all

.PHONY: all clean fclean re
