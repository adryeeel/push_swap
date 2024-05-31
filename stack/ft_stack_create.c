/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:55:11 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 00:51:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_stack_create(const char **raw_stack, size_t size)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));

	if (!stack)
		return (NULL);

	stack->max = 0;
	stack->min = 0;
	stack->size = size;
	stack->data = NULL;

	if (raw_stack)
	{
		stack->data = ft_stack_convert(raw_stack, size);
		stack->max = ft_stack_max(stack);
		stack->min = ft_stack_min(stack);
	}

	return (stack);
}
