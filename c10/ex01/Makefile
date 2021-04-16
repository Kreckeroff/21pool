NAME	= ft_cat
SRCS	= ft_cat.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all
