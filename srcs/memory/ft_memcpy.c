/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:58:34 by bcolin            #+#    #+#             */
/*   Updated: 2021/10/11 19:42:33 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *dst_final;

	dst_final = dst;
	while (n)
	{
		*(char*)dst = *(char*)src;
		dst++;
		src++;
		n--;
	}
	return (dst_final);
}
