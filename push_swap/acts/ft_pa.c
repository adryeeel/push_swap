/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:14:47 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:26:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(size_t n, t_stack *stack_a, t_stack *stack_b, bool print)
{
	if (!stack_b || !stack_b->size)
		return;

	while (n-- > 0)
	{
		ft_stack_push(stack_a, stack_b->data[0]);
		ft_stack_pop(stack_b);
		
		if (print)
			ft_putendl_fd("pa", STDOUT_FILENO);
	}
}
