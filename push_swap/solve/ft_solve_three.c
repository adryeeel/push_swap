/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:16:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:32:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_solve_three(t_stack *stack_a)
{
	if (stack_a->data[0] < stack_a->data[1]
		&& stack_a->data[1] > stack_a->data[2])
		ft_rra(1, stack_a, true);
	if (stack_a->data[0] > stack_a->data[1]
		&& stack_a->data[0] > stack_a->data[2])
		ft_ra(1, stack_a, true);
	if (stack_a->data[0] > stack_a->data[1]
		&& stack_a->data[1] < stack_a->data[2])
		ft_sa(1, stack_a, true);
}
