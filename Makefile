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
CTYPE 		= ctype/
STRING 		= string/
DATA_STRUCT = data_structures/

#list of srcs with path
SRCS 	= \
		${SRC_DIR}${CTYPE}ft_isalpha.c \
		${SRC_DIR}${CTYPE}ft_isupper.c \
		${SRC_DIR}${CTYPE}ft_islower.c \
		${SRC_DIR}${CTYPE}ft_isdigit.c \
		${SRC_DIR}${CTYPE}ft_isalnum.c \
		${SRC_DIR}${CTYPE}ft_isascii.c \
		${SRC_DIR}${CTYPE}ft_isprint.c \
		${SRC_DIR}${CTYPE}ft_toupper.c \
		${SRC_DIR}${CTYPE}ft_tolower.c \
		${SRC_DIR}${STRING}ft_strlen.c


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

.PHONY 	: 	all clean fclean re
