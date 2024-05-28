/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/28 01:30:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sort_three(t_stack *stack_a)
{
	if (stack_a->data[0] < stack_a->data[1] &&
		stack_a->data[1] > stack_a->data[2])
		ft_rra(stack_a);

	if (stack_a->data[0] > stack_a->data[1] &&
		stack_a->data[0] > stack_a->data[2])
		ft_ra(stack_a);

	if (stack_a->data[0] > stack_a->data[1] &&
		stack_a->data[1] < stack_a->data[2])
		ft_sa(stack_a);
}

void ft_stack_sort(t_stack *stack_a, t_stack *stack_b)
{
	size_t size;

	size = stack_a->size;

	if (size == 2)
	{
		ft_sa(stack_a);
		return;
	}

	if (size <= 3)
	{
		ft_sort_three(stack_a);
		return;
	}

	while (size-- > 3)
	{
		if (stack_b->size < 2)
			ft_pb(stack_a, stack_b);
	}
}
