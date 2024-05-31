/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 00:21:54 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_push(t_stack *stack, int new_value)
{
	int *new_stack;

	new_stack = ft_calloc(++(stack->size), sizeof(int));

	if (!new_stack)
		return;

	new_stack[0] = new_value;

	if (new_value > stack->data[stack->max])
		stack->max = 0;
	else
		stack->max++;

	if (new_value < stack->data[stack->min])
		stack->min = 0;
	else
		stack->min++;

	if (stack->data)
	{
		ft_memmove(new_stack + 1, stack->data, ((stack->size) - 1) * sizeof(int));
		free(stack->data);
	}

	stack->data = new_stack;
}
