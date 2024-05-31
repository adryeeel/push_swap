/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_process.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:53:09 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 17:12:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_print(t_stack *stack)
{
	size_t i;

	i = 0;
	while (i < stack->size)
	{
		ft_printf("%d ", stack->data[i]);
		i++;
	}
	ft_printf(": s %d : M %d : m %d\n", stack->size, stack->max, stack->min);
}

void ft_stack_process(const char *raw_stack[], size_t size)
{
	t_stack *stack_a;
	t_stack *stack_b;
	
	stack_a = ft_stack_create(raw_stack, size);
	stack_b = ft_stack_create(NULL, 0);
	
	if (!stack_a || !stack_b)
		return;
	
	ft_stack_sort(stack_a, stack_b);
	
	ft_stack_print(stack_a);
	// ft_stack_print(stack_b);

	ft_stack_destroy(stack_a);
	ft_stack_destroy(stack_b);
}
