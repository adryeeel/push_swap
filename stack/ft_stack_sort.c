/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/08/11 23:51:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Get the index in stack_b where "value" arg fits in.
size_t ft_sort_pb_index(t_stack *stack_b, int value)
{
	size_t i;
	size_t max_i;
	size_t min_i;

	i = 0;
	max_i = stack_b->max;
	min_i = stack_b->min;

	if (value > stack_b->data[max_i] || value < stack_b->data[min_i])
		return (max_i);

	while (i < stack_b->size - 1)
	{
		if (stack_b->data[i] > value && stack_b->data[i + 1] < value)
			return (i + 1);
		i++;
	}

	return (0);
}

size_t ft_calc_joint_ops(size_t sa_index, size_t sb_index, size_t sa_size, size_t sb_size)
{
	size_t total;

	total = 0;

	if (sa_index >= sa_size / 2 && sb_index >= sb_size / 2)
	{
		// total =
	}

	if (sa_index <= sa_size / 2 && sb_index <= sb_size / 2)
	{
	}

	return (total);
}

// Get the lightest (less operations required) index in stack_a to be pushed in stack_b.
size_t ft_sort_pa_index(t_stack *stack_a, t_stack *stack_b)
{
	size_t i;
	size_t ops;
	size_t pb_index;
	size_t ops_prev;
	size_t lightest_i;

	i = 0;
	ops = 1;
	ops_prev = 0;
	lightest_i = 0;

	while (i < stack_a->size)
	{
		pb_index = ft_sort_pb_index(stack_b, stack_a->data[i]);

		if (i > 0 && pb_index > 0)
		{
			ops += ft_calc_joint_ops(i, pb_index, stack_a->size, stack_b->size);
		}

		if (pb_index == 0)
			ops += stack_b->max - pb_index;
		else
			ops += stack_b->size - pb_index;

		if (i > 0)
			ops += stack_a->size - i;

		if (ops < ops_prev)
			lightest_i = i;

		i++;
		ops_prev = ops;
	}

	return (lightest_i);
}

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

void ft_sort_pb(t_stack *stack_a, t_stack *stack_b)
{
	size_t i;

	i = 0;

	while (i < stack_a->size)
	{
		if (stack_b->size < 2)
		{
			ft_pb(stack_a, stack_b);
			continue;
		}

		ft_sort_pa_index(stack_a, stack_b);

		// solve reverse rotate both. determine which item to push

		i++;
	}
}

void ft_sort_pa(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}

void ft_stack_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
	{
		ft_sa(stack_a);
		return;
	}

	if (stack_a->size == 3)
	{
		ft_sort_three(stack_a);
		return;
	}

	ft_sort_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_sort_pa(stack_a, stack_b);
}
