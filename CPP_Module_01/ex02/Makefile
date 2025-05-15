# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 14:45:32 by mizusato          #+#    #+#              #
#    Updated: 2025/05/16 05:51:15 by mizusato         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = brain
CXX       = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRC      = main.cpp
OBJ      = $(SRC:.cpp=.o)

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)
	@echo "$(BLUE)Deleting all objects from /ex02...$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Deleting $(NAME) from /ex02...$(RESET)"

re: fclean all

.PHONY: all clean fclean re
