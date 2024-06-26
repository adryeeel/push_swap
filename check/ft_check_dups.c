/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dups.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:13:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 23:58:11 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_check_dups(const char *raw_stack[], size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;

	while (i < size)
	{
		j = i + 1;
		len = ft_strlen(raw_stack[i]) + 1;

		while (j < size)
		{
			if (i != j && ft_strncmp(raw_stack[i], raw_stack[j], len) == 0)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
