/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 00:42:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_push(int **stack, int new_value, size_t *size)
{
	int *new_stack;

	if (*size == 0)
		return;

	new_stack = ft_calloc(++(*size), sizeof(int));

	if (!new_stack)
		return;

	while ((*size)-- > 0)
		new_stack[*size] = (*stack)[*size];
	new_stack[0] = new_value;

	free(*stack);
	*stack = new_stack;
}
