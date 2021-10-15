#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		s_len;
	int		i;

	s_len = ft_strlen(s) + 1;
	dst = (char *)malloc(sizeof(char) * s_len);
	if (!dst)
		return (NULL);
	i = -1;
	while (s[++i])
		dst[i] = (f)(i, s[i]);
	return (dst);
}
