/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:55:11 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/24 22:05:12 by arocha-b         ###   ########.fr       */
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
	stack->data = ft_stack_convert(raw_stack, size);

	return (stack);
}
