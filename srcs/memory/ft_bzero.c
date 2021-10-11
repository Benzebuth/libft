/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:06:12 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/11 18:51:05 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t c;

	if (!s)
		return ;
	c = 0;
	while (c < n)
	{
		*(size_t *)(s + c) = 0;
		c++;
	}
}
