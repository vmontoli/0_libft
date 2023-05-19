# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:49:16 by vmontoli          #+#    #+#              #
#    Updated: 2023/05/19 22:33:19 by vmontoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				:= libft.a

OBJS_DIR			:= ./objs
HEADER				:= libft.h

#TODO: Cambiar MANDATORY_SRCS a manuales para entregar
MANDATORY_SRCS		:= $(filter-out $(wildcard *_bonus.c),$(wildcard *.c))
MANDATORY_OBJS		:= $(MANDATORY_SRCS:%.c=$(OBJS_DIR)/%.o)

#TODO: Cambiar BONUS_SRCS a manuales para entregar (incluir Mandatory)
BONUS_SRCS			:= $(wildcard *.c)
BONUS_OBJS			:= $(BONUS_SRCS:%.c=$(OBJS_DIR)/%.o)

CFLAGS 				:= -Wall -Werror -Wextra
ARFLAGS 			:= -crs

.DELETE_ON_ERROR:
.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS_DIR) $(MANDATORY_OBJS)
	#TODO: eliminar norminette y echos para entregar
	@echo $(MANDATORY_SRCS)
	norminette $(MANDATORY_SRCS) $(HEADER)
	ar $(ARFLAGS) $(NAME) $(MANDATORY_OBJS)

bonus: $(OBJS_DIR) $(BONUS_OBJS)
	#TODO: eliminar norminette y echos para entregar
	@echo $(MANDATORY_SRCS)
	@echo $(filter $(wildcard *_bonus.c),$(BONUS_SRCS))
	norminette $(BONUS_SRCS) $(HEADER)
	ar $(ARFLAGS) $(NAME) $(BONUS_OBJS)

$(OBJS_DIR)/%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	-rm -r $(OBJS_DIR)

fclean: clean
	-rm $(NAME)

re: fclean all
