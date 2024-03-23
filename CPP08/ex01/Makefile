# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 16:23:48 by lgirault          #+#    #+#              #
#    Updated: 2023/11/29 14:20:28 by lgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
FLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
RM = rm -rf

OBJ_DIR = objdep

SRC =	main.cpp \
	Span.cpp \

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
DEP = $(OBJ:.o=.d)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) $(C98) -MMD -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(C98) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
	@$(RM) $(OBJ) $(DEP)

fclean : clean
	@$(RM) $(NAME) $(OBJ_DIR)

re : fclean all

-include $(DEP)