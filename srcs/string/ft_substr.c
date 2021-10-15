#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(sizeof(char) * (len));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < (len))
	{
		dst[i] = s[start + i];
		i++;
	}
	return (dst);
}
