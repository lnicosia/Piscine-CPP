# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_template                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 11:52:54 by lnicosia          #+#    #+#              #
#    Updated: 2019/10/10 15:40:05 by lnicosia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook2000

MAKEFILE = Makefile
SRC_DIR = src
INCLUDES_DIR = includes
OBJ_DIR = obj
BIN_DIR = .

SRC_RAW = main.cpp Contact.cpp

HEADERS_RAW = Contact.hpp

SRC = $(addprefix $(SRC_DIR)/, $(SRC_RAW))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_RAW:.cpp=.o))
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(HEADERS_RAW))

CFLAGS = -Wall -Wextra -Werror \
		 -I $(INCLUDES_DIR) \
		 #-fsanitize=address -g3

RED = "\033[0;31m"
GREEN = "\033[0;32m"
YELLOW = "\033[0;33m"
BLUE = "\033[0;34m"
CYAN = "\033[0;36m"
RESET = "\033[0m"

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INCLUDES) $(MAKEFILE)
	clang++ $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJ_DIR) $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"[Compilation OK]" $(RESET)

clean:
	@rm -Rf $(OBJ_DIR)
	@echo $(YELLOW)"[Object files removed]" $(RESET)

fclean: clean
	@rm -Rf $(NAME)
	@echo $(YELLOW)"[$(BIN_DIR)/$(NAME) removed]" $(RESET)

re: fclean all

.PHONY: all fclean clean
