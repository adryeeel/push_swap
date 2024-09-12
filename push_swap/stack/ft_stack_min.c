/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:05:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/30 21:07:25 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_stack_min(t_stack *stack)
{
	int min;
	size_t i;

	i = 0;
	min = 0;

	while (i < stack->size)
	{
		if (stack->data[i] < stack->data[min])
			min = i;
		i++;
	}

	return (min);
}
