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
void	*ft_memccpy(void *dest, const void *src,int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

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

	// test caracter type
	printf("\033[1;31m");
	printf("\n-- Test carater type --\n\n");
	printf("\033[0;32m");

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


	// test string
	printf("\033[1;31m");
	printf("\n-- Test string -- \n\n");
	printf("\033[0;32m");
	printf("strlen - %ld - \"coucou je suis la.\"\n\n", ft_strlen("coucou je suis la."));

	printf("strncmp - %d - \"bienvenu\", \"bienvonu\", 5 \n", ft_strncmp(s1, s2, 5));
	printf("strncmp2 - %d - \"bienvenu\", \"bienvonu\", 7 \n\n", ft_strncmp(s1, s2, 7));

	printf("strchr - %s - \"bienvenu\", e \n", ft_strchr(s1, 'e'));
	printf("strchr2 - %s - \"bienvonu\", o \n", ft_strchr(s2, 'o'));
	printf("strchr3 - %s - \"bienvonu\", x \n\n", ft_strchr(s2, 'x'));

	printf("strrchr - %s - \"bienvenu\", e \n", ft_strrchr(s1, 'e'));
	printf("strrchr2 - %s - \"bienvonu\", o \n", ft_strrchr(s2, 'o'));
	printf("strrchr3 - %s - \"bienvonu\", x \n\n", ft_strrchr(s2, 'x'));

	char s1_strlcpy[20];
	char s2_strlcpy[20] = "copypaste";
	printf("strlcpy - return : %lu / new cpy : %s / \"copypaste\", 6 \n\n",
			ft_strlcpy(s1_strlcpy, s2_strlcpy, 6), s1_strlcpy);

	// test memory
	printf("\033[1;31m");
	printf("\n-- Test memory -- \n\n");
	printf("\033[0;32m");
	printf("memset - %s - \"bienvonu\", A , 3\n", (char*)ft_memset(s1, 'A', 3));
	printf("memset2 - %s - \"bienvonu\", W , 2 \n\n", (char*)ft_memset(s2, 'W', 2));

	ft_bzero(s1, 3);
	ft_bzero(s2, 2);
	printf("bzero - %s - \"bienvonu\", 3\n", s1);
	printf("bzero2 - %s - \"bienvonu\", 2 \n\n", s2);

	char s1_memcpy[10];
	char s2_memcpy[5];
	printf("memcpy - %s - \"copiercoller\", 5 \n", (char*)ft_memcpy(s1_memcpy, "copiercoller", 5));
	printf("memcpy2 - %s - \"copiercoller\", 2\n\n", (char*)ft_memcpy(s2_memcpy, "copiercoller", 2));

	char s1_memccpy[50] = "xxxiaaaaa";
	char s2_memccpy[50] = "copiermoisvplol";
	printf("memccpy - %s - dest:\"xxxiaaaaa\" src :\"copiermoisvplol\", i, 6\n\n",
			(char*)ft_memccpy(s1_memccpy, s2_memccpy, 'i', 6));

	char s1_memmove[20] = "uuufzzzzz";
	char s2_memmove[20] = "copiermoisvplol";
	printf("memmove - %s - dest:\"uuufzzzzz\" src :\"copiermoisvplol\", 6\n\n",
			(char*)ft_memmove(s1_memmove, s2_memmove, 6));

	char s1_memchr[20] = "uuufzzzzz";
	printf("memchr - %s - \"uuufzzzzz\", f, 5 \n", (unsigned char*)ft_memchr(s1_memchr, 'f', 5));
	printf("memchr - %s - \"uuufzzzzz\", f, 3 \n\n", (unsigned char*)ft_memchr(s1_memchr, 'f', 3));

	char s1_memcmp[20] = "allooo";
	char s2_memcmp[20] = "allooz";
	printf("memcmp  - %d - \"allooo\" & \"allooz\", 5 \n", ft_memcmp(s1_memcmp, s2_memcmp, 5));
	printf("memcmp2 - %d - \"allooo\" & \"allooz\", 10 \n", ft_memcmp(s1_memcmp, s2_memcmp, 10));
	printf("memcmp3 - %d - \"allooo\" & \"allooz\", 0 \n\n", ft_memcmp(s1_memcmp, s2_memcmp, 0));

	return (0);
}
