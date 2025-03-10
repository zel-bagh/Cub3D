/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bagh <zel-bagh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:39:32 by zel-bagh           #+#    #+#             */
/*   Updated: 2019/10/27 12:43:54 by zel-bagh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *t;

	if (dst == NULL && src == NULL)
		return (NULL);
	t = (char *)dst;
	while (n > 0)
	{
		if (*(char *)t != *(char *)src)
			*(char *)t = *(char *)src;
		t++;
		src++;
		n--;
	}
	return (dst);
}
