/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:17:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:32:51 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_solve_sa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 3)
		ft_solve_three(stack_a);

	while (stack_b->size > 0)
		ft_sort_exec_sa(stack_a, stack_b);

	if (stack_a->min && stack_a->min <= stack_a->size / 2)
		ft_ra(stack_a->min, stack_a, true);

	else if (stack_a->min)
		ft_rra(stack_a->size - stack_a->min, stack_a, true);
}
