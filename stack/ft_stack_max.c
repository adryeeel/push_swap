/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:05:07 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/30 21:05:21 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_stack_max(t_stack *stack)
{
	int max;
	size_t i;

	i = 0;
	max = 0;

	while (i < stack->size)
	{
		if (stack->data[i] > stack->data[max])
			max = i;
		i++;
	}

	return (max);
}

