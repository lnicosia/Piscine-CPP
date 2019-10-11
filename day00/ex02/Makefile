# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_template                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 11:52:54 by lnicosia          #+#    #+#              #
#    Updated: 2019/10/11 14:01:17 by lnicosia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
MAKEFILE = Makefile
SRC_DIR = .
INCLUDES_DIR = .
OBJ_DIR = obj
BIN_DIR = .

SRC_RAW = tests.cpp Account.class.cpp

HEADERS_RAW = Account.class.hpp

SRC = $(addprefix $(SRC_DIR)/, $(SRC_RAW))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_RAW:.cpp=.o))
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(HEADERS_RAW))

CFLAGS = -Wall -Wextra -Werror \
		 -I $(INCLUDES_DIR)

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
