#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[0] == '\0')
		return ((char *)s);
	if (i > 0)
	{
		while (s[i] != (char)c && i > 0)
			i--;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
