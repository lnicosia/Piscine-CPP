# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_template                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 11:52:54 by lnicosia          #+#    #+#              #
#    Updated: 2019/10/10 12:30:32 by lnicosia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =

MAKEFILE = Makefile
SRC_DIR = src
INCLUDES_DIR = includes
OBJ_DIR = obj
BIN_DIR = .

SRC_RAW = 

HEADERS_RAW = 

SRC = $(addprefix $(SRC_DIR)/, $(SRC_RAW))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_RAW:.c=.o))
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(HEADERS_RAW))

CFLAGS = -Wall -Wextra -Werror \
		 -I $(INCLUDES_DIR)

RED = "\033[0;32m"
GREEN = "\033[0;31m"
BLUE = "\033[0;33m"
CYAN = "\033[0;36m"
RESET = "\033[0m"

all:
	$(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %(SRC_DIR)/%.c $(INCLUDES) $(MAKEFILE) $(OBJ_DIR)
	clang++ -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN) "[Compilation OK]" $(RESET)

clean:
	@rm -Rf $(OBJ_DIR)
	@echo $(GREEN) "[Object files removed]" $(RESET)

fclean:
	@clean
	@rm -Rf $(NAME)
	@echo $(GREEN) "[Object files and executable removed]" $(RESET)

re: fclean all

.PHONY: all fclean clean
