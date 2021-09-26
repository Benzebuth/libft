#include <stdio.h>


size_t ft_strlen(const char *s);

int ft_isalpha(int c);
int ft_isupper(int c);
int ft_islower(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);

int	main(void)
{
	// test string
	printf("\n-- Test string -- \n\n");
	printf("strlen - %ld - \"coucou je suis la.\"\n", ft_strlen("coucou je suis la."));

	// test carater type
	printf("\n-- Test carater type --\n\n");

	printf("is alpha  - %d - a \n", ft_isalpha('a'));

	printf("is upper  - %d - A \n", ft_isupper('A'));
	printf("is upper2 - %d - a \n", ft_isupper('a'));

	printf("is lower  - %d - A \n", ft_islower('A'));
	printf("is lower2 - %d - a \n", ft_islower('a'));

	printf("is digit  - %d - a \n", ft_isdigit('a'));
	printf("is digit2 - %d - 2 \n", ft_isdigit('2'));

	printf("is alnum  - %d - a \n", ft_isalnum('a'));
	printf("is alnum2 - %d - 5 \n", ft_isalnum('5'));
	printf("is alnum3 - %d - ! \n", ft_isalnum('!'));



	return (0);
}
