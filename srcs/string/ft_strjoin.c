#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		size;
	int		i;
	int		j;

	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dst = (char *)malloc(sizeof(char) * size);
	if (!dst)
		return (NULL);
	i = -1;
	while (s1[++i])
		dst[i] = s1[i];
	j = 0;
	while (s2[j])
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}
