/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:13:14 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 17:13:25 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
