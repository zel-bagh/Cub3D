/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bagh <zel-bagh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:39:52 by zel-bagh           #+#    #+#             */
/*   Updated: 2019/11/04 10:30:27 by zel-bagh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_strncmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n > 0 && *(char *)s1 && *(char *)s2)
	{
		if (*(unsigned char *)s1 == *(unsigned char *)s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
