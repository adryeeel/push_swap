/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:13:12 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:33:02 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_solve_sb(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3 && !ft_check_sa(stack_a))
	{
		if (stack_b->size < 2)
		{
			ft_pb(1, stack_a, stack_b, true);
			continue ;
		}
		ft_sort_exec_sb(stack_a, stack_b);
	}
}
