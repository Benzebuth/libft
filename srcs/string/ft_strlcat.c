#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (ft_strlen(src) + i);
	dst += i;
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dst++ = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i + j);
}
