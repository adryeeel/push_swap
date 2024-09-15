/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rrotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/31 17:10:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_rrotate(t_stack *stack)
{
	int	tmp;

	if (!stack || stack->size < 2)
		return ;
	tmp = stack->data[stack->size - 1];
	ft_memmove(stack->data + 1, stack->data, (stack->size - 1) * sizeof(int));
	stack->data[0] = tmp;
	if (stack->max == stack->size - 1)
		stack->max = 0;
	else
		stack->max++;
	if (stack->min == stack->size - 1)
		stack->min = 0;
	else
		stack->min++;
}
