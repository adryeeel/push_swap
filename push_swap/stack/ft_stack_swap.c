/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:35:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 17:06:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_swap(t_stack *stack)
{
	int tmp;

	if (stack->size <= 1 || !stack)
		return;

	tmp = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = tmp;

	if (stack->max == 0)
		stack->max = 1;
	else if (stack->max == 1)
		stack->max = 0;

	if (stack->min == 0)
		stack->min = 1;
	else if (stack->min == 1)
		stack->min = 0;
}
