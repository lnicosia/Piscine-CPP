# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 23:08:04 by ldedier           #+#    #+#              #
#    Updated: 2019/10/24 12:36:25 by lnicosia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= test

CC		= clang++

ECHO = echo
MKDIR = mkdir
RM = rm

DEBUG ?= 0

SRCDIR			=	srcs/
OBJ_DIR			=	objs/
BINDIR			=	./
INCLUDESDIR		=	includes/
TEMPLATESDIR	=	srcs/

INCLUDES		=	AToken.hpp \
					NumToken.hpp \
					OpToken.hpp \
					AddToken.hpp \
					SubToken.hpp \
					MulToken.hpp \
					DivToken.hpp \
					EvalExprRPN.hpp \

TEMPLATES		=	\

SRCS			=	main.cpp \
					AToken.cpp \
					NumToken.cpp \
					OpToken.cpp \
					AddToken.cpp \
					SubToken.cpp \
					MulToken.cpp \
					DivToken.cpp \

VPATH			=	$(INCLUDESDIR) \
					$(SRCDIR)

OBJECTS			=	$(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o)) \

CFLAGS			= -I $(INCLUDESDIR) -Wall -Wextra -Werror -std=c++98 -Wconversion -Ofast -flto

OK_COLOR	=	\x1b[32;01m
EOC			=	\033[0m


ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address
	CFLAGS -= -Ofast -flto
	CC += -g3
endif
	
SPEED = -j8

all: $(NAME)

debug:
	@$(MAKE) all DEBUG=1

$(BINDIR)$(NAME): $(OBJ_DIR) $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(CFLAGS)
	@$(ECHO) "$(OK_COLOR)$(NAME) linked with success !$(EOC)"

$(OBJ_DIR):
	@$(MKDIR) $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(INCLUDES)
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@$(RM) -f $(BINDIR)$(NAME)

re: fclean all

.PHONY: all clean fclean re debug
