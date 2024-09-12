/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:32:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
	{
		ft_sa(1, stack_a, true);
		return;
	}

	if (stack_a->size == 3)
	{
		ft_solve_three(stack_a);
		return;
	}

	ft_solve_sb(stack_a, stack_b);
	ft_solve_sa(stack_a, stack_b);
}
