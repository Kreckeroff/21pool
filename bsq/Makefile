SRCS = bsq.c src.c check.c find_largest_square.c struct_functions.c
OBJS = ${SRCS:.c=.o}
NAME = bsq
INCLUDE = bsq.h

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${INCLUDE}
			@gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
