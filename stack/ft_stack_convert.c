/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/24 22:08:30 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *ft_stack_convert(const char **raw_stack, size_t size)
{
	int *data;

	data = ft_calloc(size, sizeof(int));

	if (!data)
		return (NULL);

	while (size-- > 0)
		data[size] = ft_atoi(raw_stack[size]);

	return (data);
}
