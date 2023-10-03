# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 15:03:56 by eguelin           #+#    #+#              #
#    Updated: 2023/10/03 14:52:37 by eguelin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#Standard
OUT_DIR	= build/
CLS_DIR = class/
INC_DIR	= include/
SRC_DIR	= src/
NAME	= ...
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -I $(INC_DIR) -I $(CLS_DIR)
RM		= rm -rf
ARC		= ar rcs

#Colors
BLACK	= \033[0;30m
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
WHITE	= \033[0;37m

#Sentence
COMP_MSG		= "$(GREEN)Compilation $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"
CLEAN_MSG		= "$(RED)Cleaning $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"
FULL_CLEAN_MSG	= "$(PURPLE)Full cleaning $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"

#Sources
INC_FILES		= .hpp

INC_CLS			= .hpp

HEADERS			= $(addprefix $(INC_DIR), $(INC_FILES)) $(addprefix $(CLS_DIR), $(INC_CLS))

ALL_FILES		= .cpp

# ..._DIR			= ../
# ..._FILES		= .cpp
# ALL_FILES		+= $(addprefix $(EXEC_DIR)$(..._DIR), $(..._FILES))

CLS_FILES		= .cpp

OBJS			+= $(addprefix $(OUT_DIR), $(ALL_FILES:.cpp=.o) $(CLS_FILES:.cpp=.o))


#Rules
all: $(NAME)

$(NAME): $(OUT_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(COMP_MSG)

$(OUT_DIR)%.o : $(SRC_DIR)%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(OUT_DIR)%.o : $(CLS_DIR)%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OUT_DIR)
	@echo $(CLEAN_MSG)

fclean: clean
	$(RM) $(NAME)
	echo $(FULL_CLEAN_MSG)

force:

re: fclean all

$(OUT_DIR): force
	mkdir -p $(OUT_DIR)

.PHONY: all clean fclean force re
.SILENT: