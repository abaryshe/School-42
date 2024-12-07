# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 17:58:52 by abaryshe          #+#    #+#              #
#    Updated: 2024/11/21 13:56:50 by abaryshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CMPFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SOURCES = ${shell find -name '*.c' ! -name '*_bonus.c'}
OBJECTS = ${SOURCES:.c=.o}
FORCE_REMOVE = rm -f
BONUS_SRCS = ${shell find -name '*_bonus.c'}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${CMPFLAGS} -I ${HEADER} -c $^ -o $@
	
clean: 
	${FORCE_REMOVE} ${OBJECTS} ${BONUS_OBJS}

fclean: clean
	${FORCE_REMOVE} ${NAME}

re: fclean all

bonus:	${OBJECTS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJECTS} ${BONUS_OBJS}

.PHONY: all clean fclean re bonus
