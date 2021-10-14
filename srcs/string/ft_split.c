/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:34:06 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 21:04:36 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_sep(const char *s, char c)
{
	int	s_len;
	int	count;

	count = 0;
	s_len = ft_strlen(s);
	while (s_len--)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (++count);
}

static char	*ft_create_str(const char *s, int offset, int *i, char c)
{
	char	 *new_tab;
	int		index;
	int 	j;

	index = *i - offset;
	new_tab = (char *)malloc(sizeof(char) * (offset + 1));
	j = 0;
	while (index < *i)
	{
		new_tab[j++] = s[index++];
	}
	new_tab[j] = '\0';
	while (s[*i] == c)
		*i += 1;
	return (new_tab);
}

#include <stdio.h>
char **ft_split(const char *s, char c)
{
	char	**dst;
	int		nb_sep;
	int		offset;
	int		i;
	int		j;

	while (*s == c)
		s++;
	if (*s == 0)
		return ((char **)ft_strdup(""));	
	nb_sep = ft_count_sep(s, c);
	dst = (char **)malloc(sizeof(char *) * (nb_sep + 1));
	if (!dst)
		return (NULL);
	offset = -1;
	i = -1;
	j = 0;
	while (s[++i])
	{
		offset++;
		if (s[i] == c)
		{
			dst[j++] = ft_create_str(s, offset, &i, c);
			offset = 0;
		}
	}
	if (i != -1)
		dst[j] = ft_create_str(s, ++offset, &i, c);
	return (dst);
}
