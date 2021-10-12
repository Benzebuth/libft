#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;

	if (dest < src)
	{
		d = dest;
		while (n)
		{
			*(unsigned char*)d++ = *(const unsigned char*)src;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
