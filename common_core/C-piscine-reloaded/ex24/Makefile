LIB = libft.a

SCRS = 	srcs/ft_putchar.c \
 		srcs/ft_putstr.c \
 		srcs/ft_strcmp.c \
 		srcs/ft_strlen.c \
 		srcs/ft_swap.c

OBJS = ${SCRS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

HEADERS = includes

all: ${LIB}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -I ${HEADERS} -c $< -o $@

clean:
	rm -fr ${OBJS}

fclean: clean
	rm -fr ${LIB}

re: fclean all
