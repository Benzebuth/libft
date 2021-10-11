#include <stdio.h>

//string
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

//memory
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

//ctype
int ft_isalpha(int c);
int ft_isupper(int c);
int ft_islower(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);


int	main(void)
{
	//test variable
	char s1[] = "bienvenu";
	char s2[] = "bienvonu";

	// test string
	printf("\n-- Test string -- \n\n");
	printf("strlen    - %5ld - \"coucou je suis la.\"\n\n", ft_strlen("coucou je suis la."));

	printf("strncmp	  - %5d  - \"bienvenu\", \"bienvonu\", 5 \n", ft_strncmp(s1, s2, 5));
	printf("strncmp2  - %5d  - \"bienvenu\", \"bienvonu\", 7 \n\n", ft_strncmp(s1, s2, 7));

	printf("strchr    - %5s  - \"bienvenu\", e \n", ft_strchr(s1, 'e'));
	printf("strchr2   - %5s  - \"bienvonu\", o \n", ft_strchr(s2, 'o'));
	printf("strchr3   - %5s  - \"bienvonu\", x \n\n", ft_strchr(s2, 'x'));

	printf("strrchr   - %5s  - \"bienvenu\", e \n", ft_strrchr(s1, 'e'));
	printf("strrchr2  - %5s  - \"bienvonu\", o \n", ft_strrchr(s2, 'o'));
	printf("strrchr3  - %5s  - \"bienvonu\", x \n\n", ft_strrchr(s2, 'x'));
	
	// test memory
	printf("memset    - %5s  - \"bienvonu\", A , 3\n", ft_memset(s1, 'A', 3));
	printf("memset2   - %5s  - \"bienvonu\", W , 2 \n\n", ft_memset(s2, 'W', 2));

	ft_bzero(s1, 3);
	ft_bzero(s2, 2);
	printf("bzero     - %5s  - \"bienvonu\", 3\n", s1);
	printf("bzero2    - %5s  - \"bienvonu\", 2 \n\n", s2);

	char s1_memcpy[10];
	char s2_memcpy[5];
	printf("memcpy    - %5s  - \"copiercoller\", 5 \n", ft_memcpy(s1_memcpy, "copiercoller", 5));
	printf("memcpy2   - %5s  - \"copiercoller\", 2\n", ft_memcpy(s2_memcpy, "copiercoller", 2));


	// test caracter type
	printf("\n-- Test carater type --\n\n");

	printf("is alpha  - %d - a \n\n", ft_isalpha('a'));

	printf("is upper  - %d - A \n", ft_isupper('A'));
	printf("is upper2 - %d - a \n\n", ft_isupper('a'));

	printf("is lower  - %d - A \n", ft_islower('A'));
	printf("is lower2 - %d - a \n\n", ft_islower('a'));

	printf("is digit  - %d - a \n", ft_isdigit('a'));
	printf("is digit2 - %d - 2 \n\n", ft_isdigit('2'));

	printf("is alnum  - %d - a \n", ft_isalnum('a'));
	printf("is alnum2 - %d - 5 \n", ft_isalnum('5'));
	printf("is alnum3 - %d - ! \n\n", ft_isalnum('!'));

	printf("is ascii  - %d - a \n", ft_isascii('a'));
	printf("is ascii2 - %d - 1 \n", ft_isascii('1'));
	printf("is ascii3 - %d - 130 \n\n", ft_isascii(130));


	printf("is print  - %d - a \n", ft_isprint('a'));
	printf("is print2 - %d - ' ' \n", ft_isprint(' '));
	printf("is print3 - %d - no printable 1 \n\n", ft_isprint(1));

	printf("toupper   - %d - a \n", ft_toupper('a'));
	printf("toupper2  - %d - C \n\n", ft_toupper('C'));

	printf("tolower   - %d - a \n", ft_tolower('a'));
	printf("tolower2  - %d - C \n\n", ft_tolower('C'));

	return (0);
}
