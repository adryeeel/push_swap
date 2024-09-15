/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_sb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:21:42 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/02 01:45:34 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_find_place_sb(t_stack *stack_b, int value)
{
	size_t	i;
	size_t	max_i;
	size_t	min_i;

	i = 0;
	max_i = stack_b->max;
	min_i = stack_b->min;
	if (value > stack_b->data[0] && value < stack_b->data[stack_b->size - 1])
		return (0);
	if (value < stack_b->data[min_i] || value > stack_b->data[max_i])
		return (max_i);
	while (i < stack_b->size - 1)
	{
		if (stack_b->data[i] > value && stack_b->data[i + 1] < value)
			return (i + 1);
		i++;
	}
	return (0);
}
