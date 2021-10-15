/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:04:11 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/11 18:01:11 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	if (!b)
		return (0);
	count = 0;
	while (count < len)
	{
		*(unsigned char *)(b + count) = c;
		count++;
	}
	return (b);
}
