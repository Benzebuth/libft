SRCS 	= main.c
		ft_strlen.c

OBJS 	= ${SRCS:.c=.o}

RM 		= rm -f

CC 		= gcc
CFLAGS 	= -Wall -Werror -Wextra

NAME 	= libft.a
