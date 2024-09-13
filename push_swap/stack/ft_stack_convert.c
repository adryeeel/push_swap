/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/05 00:29:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *ft_stack_convert(char *input[], size_t size)
{
	int *data;

	if (!input)
		return (NULL);

	data = ft_calloc(size, sizeof(int));

	if (!data)
		return (NULL);

	while (size-- > 0)
		data[size] = ft_atoi(input[size]);

	return (data);
}
