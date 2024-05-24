/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:15:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:23:02 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_b || !stack_a->size || !stack_b->size)
		return;

	ft_stack_rotate(stack_a);
	ft_stack_rotate(stack_b);

	ft_putendl_fd("rr", STDOUT_FILENO);
}
