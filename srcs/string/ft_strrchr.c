#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ptn;

	ptn = 0;
	while (*s)
	{
		if (*s == c)
			ptn = (char*)s;
		s++;
	}

	return (ptn);
}
