/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 00:21:00 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_push(int **stack, int new_value, size_t *size)
{
	int *new_stack;

	new_stack = ft_calloc(++(*size), sizeof(int));

	if (!new_stack)
		return;

	new_stack[0] = new_value;

	if (*stack)
	{
		ft_memmove(new_stack + 1, *stack, ((*size) - 1) * sizeof(int));
		free(*stack);
	}

	*stack = new_stack;
}
