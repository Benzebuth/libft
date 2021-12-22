/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <bcolin@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:09:28 by bcolin            #+#    #+#             */
/*   Updated: 2021/12/22 15:09:31 by bcolin           ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		s_len;
	int		i;

	if (!s || !(f))
		return (NULL);
	s_len = ft_strlen(s) + 1;
	dst = (char *)malloc(sizeof(char) * s_len);
	if (!dst)
		return (NULL);
	i = -1;
	while (s[++i])
		dst[i] = (f)(i, s[i]);
	dst[i] = '\0';
	return (dst);
}
