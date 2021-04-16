NAME	= do-op
SRCS	= ft_atoi.c ft_putnbr.c ft_putchar.c ft_print.c ft_main.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
HEADER	= -include ft.h

.SILENT:

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	@${CC} -o ${NAME} ${OBJS} ${HEADER}

all: ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
