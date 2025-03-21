/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bagh <zel-bagh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:55:50 by zel-bagh           #+#    #+#             */
/*   Updated: 2019/11/01 15:53:33 by zel-bagh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (i < start)
		return (ft_strdup(""));
	i -= start;
	len = (i < len) ? i : len;
	if ((ns = malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		ns[i++] = s[start++];
	ns[i] = '\0';
	return (ns);
}
