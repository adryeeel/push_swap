/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:38 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 01:02:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_rotate(t_stack *stack)
{
	int tmp;

	if (!stack || stack->size < 2)
		return;

	tmp = stack->data[0];
	ft_memmove(stack->data, stack->data + 1, (stack->size - 1) * sizeof(int));
	stack->data[stack->size - 1] = tmp;

	if (stack->max == 0)
		stack->max = stack->size - 1;
	else
		stack->max--;

	if (stack->min == 0)
		stack->min = stack->size - 1;
	else
		stack->min--;
}
