/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bagh <zel-bagh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 15:02:27 by zel-bagh.          #+#    #+#             */
/*   Updated: 2022/09/11 00:35:07 by zel-bagh           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		chr_bn(char *was_read)
{
	int i;

	i = 0;
	if (was_read == NULL)
		return (-1);
	while (was_read[i] != '\0')
	{
		if (was_read[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		read_fd(char **was_read, int *len_read, int fd)
{
	*was_read = malloc(BUFFER_SIZE + 1);
	if (*was_read == NULL)
		return (-1);
	*len_read = read(fd, *was_read, BUFFER_SIZE);
	if (*len_read == -1)
	{
		free(*was_read);
		*was_read = NULL;
		return (-1);
	}
	was_read[0][*len_read] = '\0';
	return (*len_read);
}
