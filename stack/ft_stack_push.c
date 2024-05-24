/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:11:05 by arocha-b         ###   ########.fr       */
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

	if (stack->data)
	{
		ft_memmove(new_stack + 1, stack->data, ((stack->size) - 1) * sizeof(int));
		free(stack->data);
	}

	stack->data = new_stack;
}
