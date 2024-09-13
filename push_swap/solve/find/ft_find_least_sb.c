/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_least_sb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:16:08 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/02 04:24:07 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../../push_swap.h"

size_t ft_find_least_sb(t_stack *stack_a, t_stack *stack_b)
{
	size_t amount;
	size_t min_amount;

	size_t sa_idx;
	size_t sb_idx;
	size_t least_idx;

	sb_idx = 0;
	min_amount = ULONG_MAX;

	while (sb_idx < stack_b->size)
	{
		sa_idx = ft_find_place_sa(stack_a, stack_b->data[sb_idx]);
		amount = ft_calc_total_ops(sa_idx, sb_idx, stack_a->size, stack_b->size);

		if (amount < min_amount)
		{
			least_idx = sb_idx;
			min_amount = amount;
		}

		sb_idx++;
	}

	return (least_idx);
}
