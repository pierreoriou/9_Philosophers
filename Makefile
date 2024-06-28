NAME = philo

SRCS_DIR = ./sources
SRCS =	main.c \
		errors.c

OBJS_DIR = obj
OBJS = ${addprefix ${OBJS_DIR}/, ${SRCS:.c=.o}}

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I${HEADERS_PATH}

LIBFT_PATH = ./Libft

LIBFT_NAME = libft.a

HEADERS_PATH = ./headers

HEADERS_NAME = philo.h

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c ${HEADERS_PATH}/${HEADERS_NAME}
	@mkdir -p ${dir $@}
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${LIBFT_PATH}/${LIBFT_NAME}:
	make -C ${LIBFT_PATH}

${NAME}: ${OBJS} ${LIBFT_PATH}/${LIBFT_NAME}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} -L${LIBFT_PATH} -lft

clean:
	rm -rf ${OBJS_DIR}
	make clean -C ${LIBFT_PATH}

fclean: clean
	rm -r ${NAME}
	rm -r ${LIBFT_PATH}/${LIBFT_NAME}

re: fclean all

.PHONY: all clean fclean re
