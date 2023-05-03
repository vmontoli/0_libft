# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:49:16 by vmontoli          #+#    #+#              #
#    Updated: 2023/05/03 13:20:37 by vmontoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				:= libft
OUTPUT_FILE			:= $(NAME).a

MANDATORY_SRCS		:= $(filter-out $(wildcard %_bonus.c),$(wildcard %.c))
MANDATORY_OBJS		:= $(MANDATORY_SRCS:.c=.o)
MANDATORY_HEADER	:= fibft.h

BONUS_SCRS			:= $(wildcard %.c)
BONUS_OBJS			:= $(BONUS_SCRS:.c=.o)
BONUS_HEADER		:= libft_bonus.h

CFLAGS 				:= -Wall -Werror -Wextra
ARFLAGS 			:= -crs

.PHONY: all mandatory bonus clean fclean re

$(NAME) all: mandatory

mandatory: $(MANDATORY_OBJS)
	ar $(ARFLAGS) $(OUTPUT_FILE) $(MANDATORY_OBJS)

bonus: $(BONUS_OBJS)
	ar $(ARFLAGS) $(OUTPUT_FILE) $(BONUS_OBJS)

clean:
	rm *.c

fclean: clean
	rm $(OUTPUT_FILE)

re: fclean all
