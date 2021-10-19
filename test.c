#include <stdio.h>

//string
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *nptr);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

//memory
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src,int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

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

//IO
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

// DATA_LIST
typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);

// function for test
char mapi_func(unsigned int i, char c)
{
	return (c + i);
}

void striteri_func(unsigned int i, char *str)
{
	while (*str)
	{
		*str += i;
		str++;
	}
}


int	main(void)
{
//test variable
	char s1[] = "bienvenu";
	char s2[] = "bienvonu";

// test caracter type
	printf("\033[1;31m");
	printf("\n-- Test carater type --\n\n");
	printf("\033[0;33m");

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
	printf("\033[0;34m");
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

	printf("atoi  - %d - \"	 -459nasdf\" \n", ft_atoi("	 -459nasdf"));
	printf("atoi2 - %d - \"	 --459nasdf\" \n", ft_atoi("	 --459nasdf"));
	printf("atoi3 - %d - \"	 +6345vdf\" \n", ft_atoi("	 +6345vdf"));
	printf("atoi4 - %d - \"+-54\" \n\n", ft_atoi("+-54"));

	char s1_strlcat[20] = "helloworld";
	char s2_strlcat[20] = "copypaste";
	printf("strlcat - %zu - \"helloworld\"\"copypaste\", 20\n", ft_strlcat(s1_strlcat, s2_strlcat, 20));
	printf("s1_strlcat : %s\n", s1_strlcat);
	char s1_strlcat_bis[20] = "helloworld";
	printf("strlcat - %zu - \"helloworld\"\"copypaste\", 13\n", ft_strlcat(s1_strlcat_bis, s2_strlcat, 13));
	printf("s1_strlcat : %s\n\n", s1_strlcat_bis);

	char s1_strnstr[20] = "hello ici coucou moi";
	char s1_strnstr_bis[30] = "hello moi ici coucou moi";
	char s2_strnstr[20] = "moi";
	printf("strnstr - %s - \"hello ici coucou moi\"\"moi\", 20\n", ft_strnstr(s1_strnstr, s2_strnstr, 20));
	printf("strnstr - %s - \"hello moi ici coucou moi\"\"moi\", 20\n", ft_strnstr(s1_strnstr_bis, s2_strnstr, 20));
	printf("strnstr - %s - \"hello ici coucou moi\"\"moi\", 5\n", ft_strnstr(s1_strnstr, s2_strnstr, 5));
	printf("strnstr - %s - \"hello ici coucou moi\" \"\", 5\n\n", ft_strnstr(s1_strnstr, "", 5));

	char s1_strdup[20] = "i am the new one";
	char *ptr_receive = ft_strdup(s1_strdup);
	printf("ft_strdup - %s - \n\n", ptr_receive);

	printf("itoa - %s / 304\n", ft_itoa(304));
	printf("itoa - %s / 0\n", ft_itoa(0));
	printf("itoa - %s / -125\n", ft_itoa(-125));
	printf("itoa - %s / -8\n", ft_itoa(-8));
	printf("itoa - %s / -2147483648\n\n", ft_itoa(-2147483648));

	printf("split - \"XXXlouXXcouXXXcaXva\", 'X'\n");
	int c_split = 0;
	char **split_recu = ft_split("XXXlouXXcouXXXcaXva", 'X');
	while (c_split <= 4)
	{
		printf("out:%s\n", split_recu[c_split]);
		c_split++;
	}

	printf("\nsubstr - %s - couloubou, 4, 3\n\n", ft_substr("couloubou", 4, 3));

	printf("strjoin - %s - couloubou, HELLO\n\n", ft_strjoin("couloubou", "HELLO"));

	printf("strtrim - %s - XUXcouXlouXXbouXUXX, 'X'\n",
			ft_strtrim("XUXcouXlouXXbouXUXX", "X"));
	printf("strtrim - %s - XUXcouXlouXXbouXUXX, 'XU'\n",
			ft_strtrim("XUXcouXlouXXbouXUXX", "XU"));
	printf("strtrim - %s - 'XU Xcou Xlo u XXbo u X  UXX', ' '\n",
			ft_strtrim("XU Xcou Xlo u XXbo u X  UXX", " "));
	printf("strtrim - %s - '      ', ' ' \n\n",
			ft_strtrim("        ", " "));


	char str_mapi[] = "abcdefg";
	char (*ptr_mapi)(unsigned int, char) = mapi_func; // create ptr of function + assignation
	printf("strmapi - %s - \"abcdefg\"\n", ft_strmapi(str_mapi, mapi_func));

	char str_striteri[] = "abcdefg";
	ft_striteri(str_striteri, striteri_func);
	printf("striteri - %s - \"abcdefg\"\n", str_striteri);

// test memory
	printf("\033[1;31m");
	printf("\n-- Test memory -- \n\n");
	printf("\033[0;35m");
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

	printf("calloc - %p - 5 , int\n\n", ft_calloc( 5, sizeof(int)));

// IO
#include <fcntl.h>

	printf("\033[1;31m");
	printf("\n-- Test IO -- \n\n");
	printf("\033[0;36m");
	int myfile;

	myfile = open("test_putchar_fd.txt", O_RDWR);
	if (myfile < 0)
		printf("error path file.");
	ft_putchar_fd('h', myfile);
	ft_putchar_fd('e', myfile);
	ft_putchar_fd('l', myfile);
	ft_putchar_fd('l', myfile);
	ft_putchar_fd('o', myfile);

	ft_putstr_fd(" world", myfile);

	ft_putendl_fd(" and sky", myfile);
	ft_putstr_fd("new line !", myfile);

	printf("putchar_fd\nputstr_fd\nputendl_fd - checkfile test_putchar_fd.txt\n\n");


// DATA_LIST
	printf("\033[1;31m");
	printf("\n-- Test DATA LIST --\n\n");
	printf("\033[0;31m");


	long int	i;
	int i_recu;
	t_list *recu;
	t_list *recu2;

	i = 26;
	recu = ft_lstnew(((void *)i));
	recu2 = ft_lstnew(((void *)i));
	ft_lstadd_front(&recu, recu2);
	i_recu = (long int)recu->content;
	printf("lstnew - %d\n", i_recu);
	printf("lstadd_front + content:%d\n", i_recu);
	printf("lstsize - %d\n\n", ft_lstsize(recu));

	return (0);
}
