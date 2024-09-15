/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_place_sa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:21:44 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/02 01:46:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_find_place_sa(t_stack *stack_a, int value)
{
	size_t	i;
	size_t	max_i;
	size_t	min_i;

	i = 0;
	max_i = stack_a->max;
	min_i = stack_a->min;
	if (value < stack_a->data[0] && value > stack_a->data[stack_a->size - 1])
		return (0);
	if (value < stack_a->data[min_i] || value > stack_a->data[max_i])
		return (min_i);
	while (i < stack_a->size - 1)
	{
		if (stack_a->data[i] < value && stack_a->data[i + 1] > value)
			return (i + 1);
		i++;
	}
	return (0);
}
