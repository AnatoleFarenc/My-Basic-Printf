CC = cc
SRC = ft_printf.c check_value.c main.c
FLAGS = -Wall -Wextra -Werror
OBJ = ${SRC:.c=.o}
NAME = prog
RM = rm -rf
LINKER_FLAGS = -Libft
INCLUDES = libft/libft.a

.PHONY: all clean fclean re bonus

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${LINKER_FLAGS} ${OBJ} -o ${NAME}

%.o: %.c ${INCLUDES}
	${CC} ${FLAGS} -c $< -o $@


clean:
	${RM} ${OBJ} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all