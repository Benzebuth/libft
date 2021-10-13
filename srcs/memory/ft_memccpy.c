#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if (!dest || !src)
		return (0);
	while (n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *) src == (unsigned char)c)
			return (++dest);
		dest++;
		src++;
		n--;
	}
	return (0);
}
