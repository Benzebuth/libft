#ifndef LIBFT_H
# define LIBFT_H

// typedef list
typedef unsigned long size_t;
typedef signed long ssize_t;

// prototype
// string
size_t  ft_strlen(const char *s);
int     ft_toupper(int c);
int     ft_tolower(int c);

// caracter type
int ft_isalpha(int c);
int ft_isupper(int c);
int ft_islower(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

#endif
