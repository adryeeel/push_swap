/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dups.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:13:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:42:13 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool ft_check_dups(t_strarr *input)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;

	while (i < input->length)
	{
		j = i + 1;
		len = ft_strlen(input->data[i]) + 1;

		while (j < input->length)
		{
			if (i != j && ft_strncmp(input->data[i], input->data[j], len) == 0)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
