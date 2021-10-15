/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:34:06 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/14 21:54:41 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(const char s, char sep)
{
	if (s == sep)
		return (1);
	else
		return (0);
}

static int	ft_count_words(const char *str, char sep)
{
	int	nb_words;
	int	flag;

	nb_words = 0;
	flag = 0;
	while (*str)
	{
		if (!(ft_issep(*str, sep)) && flag == 0)
		{
			flag = 1;
			nb_words++;
		}
		else
			flag = 0;
		str++;
	}
	return (nb_words);
}

static char	*ft_create_word(const char *str, int offset, int str_end)
{
	char	*new_word;
	int		i;

	new_word = (char *)malloc(sizeof(char) * (str_end - offset + 1));
	if (!new_word)
		return (NULL);
	i = 0;
	while (offset < str_end)
		new_word[i++] = str[offset++];
	new_word[i] = '\0';
	return (new_word);
}

char	**ft_split(const char *s, char c)
{
	char	**dst;
	size_t	i;
	size_t	j;
	int		offset;

	dst = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !dst)
		return (0);
	i = 0;
	j = 0;
	offset = -1;
	while (i <= ft_strlen(s))
	{
		if (!(ft_issep(s[i], c)) && offset < 0)
			offset = i;
		else if ((ft_issep(s[i], c) || i == ft_strlen(s)) && offset >= 0)
		{
			dst[j++] = ft_create_word(s, offset, i);
			offset = -1;
		}
		i++;
	}
	dst[j] = (void *)0;
	return (dst);
}
