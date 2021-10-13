#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		s_len;
	char	*ptr_s;

	s_len = ft_strlen(s);
	ptr_s = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!ptr_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr_s[i] = s[i];
		i++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
