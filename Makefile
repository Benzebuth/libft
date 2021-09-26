#Name of archive
NAME 	= libft.a

#compiler option
CC 		= gcc
CFLAGS 	= -Wall -Werror -Wextra

RM 		= rm -f

#header path
HEADER 	= -I includes

#add path of dir here
SRC_DIR 	= srcs/
STRING 		= string/
DATA_STRUCT = data_structures/

#list of srcs with path
SRCS 	= \
		${SRC_DIR}ft_strlen.c \
		${SRC_DIR}ft_isalpha.c \
		${SRC_DIR}ft_isupper.c \
		${SRC_DIR}ft_islower.c


OBJS 	= ${SRCS:.c=.o}


# build
all 	: 	${NAME}

%.o 	: 	%.c
				${CC} ${CFLAGS} -c ${HEADER} $< -o ${<:.c=.o}

${NAME} : 	${OBJS}
				ar -rcs $@ $^

clean 	:
				${RM} ${OBJS}

fclean 	: 	clean
				${RM} ${NAME}

re 		: 	fclean all

f 		: 	fclean all clean

.PHONY 	: 	all clean fclean re f
