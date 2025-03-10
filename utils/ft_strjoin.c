/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bagh <zel-bagh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:30:55 by zel-bagh           #+#    #+#             */
/*   Updated: 2020/11/11 11:28:08 by zel-bagh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	int		l;
	int		i;
	char	*ns;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = (int)ft_strlen(s1);
	l = (int)ft_strlen(s2);
	c = i + l;
	ns = malloc(++c * sizeof(char));
	if (ns == NULL)
		return (NULL);
	i -= 1;
	while (--c >= 0)
		if (l >= 0)
			ns[c] = s2[l--];
		else if (i >= 0)
			ns[c] = s1[i--];
	return (ns);
}
