/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:38 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:11:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_rotate(t_stack *stack)
{
	int tmp;
	
	if (!stack || !stack->size)
		return;

	tmp = stack->data[stack->size - 1];
	ft_memmove(stack + 1, stack, (stack->size) * sizeof(int));
	stack->data[0] = tmp;
}
