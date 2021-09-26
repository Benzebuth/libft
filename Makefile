#Name of archive
NAME 	= libft.a

#compiler option
CC 		= gcc
CFLAGS 	= -Wall -Werror -Wextra

RM 		= rm -f

#add dir here
SRC_DIR 	= srcs/
STRING 		= string/
DATA_STRUCT = data_structures/

#list of srcs with path
SRCS 	= ${SRC_DIR}main.c \
		${SRC_DIR}ft_strlen.c


OBJS 	= ${SRCS:.c=.o}


# build
all 	: 	${NAME}

%.o 	: 	%.c
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : 	${OBJS}
				ar -rcs $@ $^

clean 	:
				${RM} ${OBJS}

fclean 	: 	clean
				${RM} ${NAME}

re 		: 	fclean all

f 		: 	fclean all clean

.PHONY 	: 	all clean fclean re f
