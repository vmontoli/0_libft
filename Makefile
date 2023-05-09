# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:49:16 by vmontoli          #+#    #+#              #
#    Updated: 2023/05/09 19:14:44 by vmontoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				:= libft
OUTPUT_FILE			:= $(NAME).a

OBJS_DIR			:= ./objs

MANDATORY_SRCS		:= $(filter-out $(wildcard *_bonus.c),$(wildcard *.c))
MANDATORY_OBJS		:= $(MANDATORY_SRCS:%.c=$(OBJS_DIR)/%.o)
MANDATORY_HEADERS	:= libft.h

BONUS_SCRS			:= $(wildcard *.c)
BONUS_OBJS			:= $(BONUS_SCRS:%.c=$(OBJS_DIR)/%.o)
BONUS_HEADERS		:= libft_bonus.h libft.h

CFLAGS 				:= -Wall -Werror -Wextra
ARFLAGS 			:= -crs

.DELETE_ON_ERROR:
.PHONY: all mandatory bonus clean fclean re

$(NAME) all: mandatory

mandatory: objs $(MANDATORY_OBJS)
	norminette $(MANDATORY_SRCS) $(MANDATORY_HEADERS)
	ar $(ARFLAGS) $(OUTPUT_FILE) $(MANDATORY_OBJS)

bonus: objs $(BONUS_OBJS)
	norminette $(BONUS_SRCS) $(BONUS_HEADERS)
	ar $(ARFLAGS) $(OUTPUT_FILE) $(BONUS_OBJS)

$(OBJS_DIR)/%.o: %.c
	cc $(CFLAGS) -c $< -o $@

objs:
	mkdir -p $(OBJS_DIR)

clean:
	-rm -r $(OBJS_DIR)
#	-rm $(OBJS_DIR)/*.o

fclean: clean
	-rm $(OUTPUT_FILE)

re: fclean all
