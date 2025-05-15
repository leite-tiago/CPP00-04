# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 12:02:18 by tborges-          #+#    #+#              #
#    Updated: 2025/05/15 14:16:31 by tborges-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = FragTrap

SRC_DIR = src
SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/ClapTrap.cpp  $(SRC_DIR)/FragTrap.cpp

CXX = @c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

OBJ_DIR = obj
OBJS = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo $(NAME) compiled!

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
