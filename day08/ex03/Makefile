# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 23:08:04 by ldedier           #+#    #+#              #
#    Updated: 2019/10/23 14:52:55 by lnicosia         ###   ########.fr        #
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

INCLUDES		=	IInstruction.hpp \
					IncrementPointer.hpp \
					IncrementByte.hpp \
					DecrementPointer.hpp \
					DecrementByte.hpp \
					ByteOut.hpp \
					ByteIn.hpp \
					JumpTo.hpp \
					BackTo.hpp \
					Mindopen.hpp \

					

TEMPLATES		=	\

SRCS			=	main.cpp \
					Mindopen.cpp \
					IncrementPointer.cpp \
					IncrementByte.cpp \
					DecrementPointer.cpp \
					DecrementByte.cpp \
					ByteOut.cpp \
					ByteIn.cpp \
					JumpTo.cpp \
					BackTo.cpp \

VPATH			=	$(INCLUDESDIR) \
					$(SRCDIR)

OBJECTS			=	$(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o)) \

CFLAGS			= -I $(INCLUDESDIR) -Wall -Wextra -Werror -std=c++98 -Wconversion

OK_COLOR	=	\x1b[32;01m
EOC			=	\033[0m


ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address
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
