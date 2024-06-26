/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:55:11 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/27 00:31:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_stack_create(const char **raw_stack, size_t size)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));

	if (!stack)
		return (NULL);

	stack->size = size;

	if (raw_stack)
		stack->data = ft_stack_convert(raw_stack, size);
	else
		stack->data = NULL;

	return (stack);
}
