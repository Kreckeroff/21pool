SRCS_DIRECT			= srcs
INCLUDES_DIRECT		= includes
NAMES				= ft_strlen ft_swap ft_putstr ft_putchar ft_strcmp
SRC 				= $(addprefix $(SRCS_DIR)/, $(NAMES:=.C))
OBJS				= $(SRCS:.c=.o)
CFLAGS				= -Wall -Wextra -Werror
CC 					= gcc
.DEFAULT_GOAL		= all
OUTPUT				= libft.a

.PHONY				= clean all fclean

.c.o :
	$(CC) $(CFLAGS) -I(INCLUDES_DIRECT) -c $< -o ${<:.c=.o}
all : $(OBJS)
	ar -rc $(OUTPUT) $(OBJS)

$(OUTPUT) : all

clean :
	rm -rf $(SRCS:.c=.c~)

fclean : clean
	rm -f $(OBJS)

re: fclean all
