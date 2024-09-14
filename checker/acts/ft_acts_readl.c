/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_readl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:37:14 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 14:32:53 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

static void ft_strmcat(char **dst, char *src)
{
	char *tmp;

	tmp = ft_strjoin(*dst, src);
	free(*dst);
	*dst = tmp;
}

char *ft_acts_readl(void)
{
	char *line;
	char *buffer;
	int bytes_read;

	buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	line = ft_calloc(NULL_BYTE, sizeof(char));

	if (!buffer || !line)
		return (NULL);

	while (!ft_strchr(buffer, '\n'))
	{
		bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE - NULL_BYTE);

		if (bytes_read <= 0)
		{
			free(line);
			free(buffer);
			return (NULL);
		}

		buffer[bytes_read] = '\0';
		ft_strmcat(&line, buffer);
	}

	free(buffer);
	return (line);
}
