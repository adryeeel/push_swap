/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:57:22 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:09:30 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->size)
		return;

	ft_stack_push(stack_b, stack_a->data[0]);
	ft_stack_pop(stack_a);

	ft_putendl_fd("pb", STDOUT_FILENO);
}
