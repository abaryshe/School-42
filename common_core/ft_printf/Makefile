# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 16:24:28 by abaryshe          #+#    #+#              #
#    Updated: 2024/12/07 03:32:24 by abaryshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = ${shell find . -name "ft_print*.c"}
OBJECTS = ${SOURCES:.c=.o}
ARCHIVE = ar rcs
CC = cc
CMPFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h
F_REM = rm -f

all: ${NAME}

${NAME}: ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${CMPFLAGS} -I ${HEADER} -c $^ -o $@

clean:
	${F_REM} ${OBJECTS}

fclean: clean
	${F_REM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
