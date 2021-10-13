#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (n)
		{
			n--;
			*(d + n) = *(s + n);
		}
		return (dest);
	}
	while (n--)
		*d++ = *s++;
	return (dest);
}
