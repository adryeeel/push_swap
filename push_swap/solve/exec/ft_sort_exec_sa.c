/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_exec_sa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:31:44 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:31:59 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_exec_sa(t_stack *stack_a, t_stack *stack_b)
{
	size_t	sa_idx;
	size_t	sa_half;
	size_t	sb_idx;
	size_t	sb_half;

	sa_half = stack_a->size / 2;
	sb_half = stack_b->size / 2;
	sb_idx = ft_find_least_sb(stack_a, stack_b);
	sa_idx = ft_find_place_sa(stack_a, stack_b->data[sb_idx]);
	if (sa_idx <= sa_half && sb_idx <= sb_half)
		ft_exec_ra_rb(sa_idx, sb_idx, stack_a, stack_b);
	else if (sa_idx > sa_half && sb_idx > sb_half)
		ft_exec_rra_rrb(sa_idx, sb_idx, stack_a, stack_b);
	else if (sa_idx <= sa_half && sb_idx > sb_half)
		ft_exec_ra_rrb(sa_idx, sb_idx, stack_a, stack_b);
	else if (sb_idx <= sb_half && sa_idx > sa_half)
		ft_exec_rra_rb(sa_idx, sb_idx, stack_a, stack_b);
	ft_pa(1, stack_a, stack_b, true);
}
