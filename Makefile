CC = cc
SRC = ft_printf.c ft_print_char.c ft_printf_hex.c ft_print_string.c ft_print_dec.c  main.c
FLAGS = -Wall -Wextra -Werror
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a
RM = rm -rf
LIB_DIR = ./libft
INCLUDES = ${LIB_DIR}/libft.a

.PHONY: all clean fclean re bonus

all: ${INCLUDES} ${NAME} 

${INCLUDES}:
	make -C libft

${NAME}: ${OBJ}
	cp ${INCLUDES} ${NAME}
	ar rcs ${NAME} ${OBJ}

%.o: %.c ${INCLUDES}
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${BONUS_OBJ}
	make clean -C libft 

fclean: clean
	${RM} ${NAME}
	make fclean -C  ${LIB_DIR} 

re: fclean all