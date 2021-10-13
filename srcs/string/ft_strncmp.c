#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 &&*s1 == *s2)
	{
		++s1;
		++s2;
		--n;
	}
	if (n)
		return ((char)(*s1) - (char)(*s2));
	return (0);
}
