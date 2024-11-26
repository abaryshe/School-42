# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaryshe <abaryshe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 12:10:44 by abaryshe          #+#    #+#              #
#    Updated: 2024/11/10 18:24:10 by abaryshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCS = ./includes/
SOURCE = ft_display_file.c
SRCS_DIR = ./functions/
SRCS = ${addprefix ${SRCS_DIR}, ${SOURCE}}
OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I ${INCS} -c $< -o $@

clean:
	rm -fr ${OBJS}
	
fclean: clean
	rm -fr ${NAME}

#re: fclean all
