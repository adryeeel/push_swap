/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rrotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/26 00:03:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_rrotate(t_stack *stack)
{
	int tmp;

	if (!stack || !stack->size)
		return;

	tmp = stack->data[0];
	ft_memmove(stack, stack + 1, (stack->size) * sizeof(int));
	stack->data[stack->size - 1] = tmp;
}
