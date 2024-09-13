/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:04:34 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 22:15:00 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_init(t_stack **stack, char *data[])
{
	size_t size;
	
	size = ft_strarr_length(data);
	(*stack)->max = 0;
	(*stack)->min = 0;
	(*stack)->size = size;
	(*stack)->data = NULL;

	if (data)
	{
		(*stack)->data = ft_stack_convert(data, size);
		(*stack)->max = ft_stack_max(*stack);
		(*stack)->min = ft_stack_min(*stack);
	}
}
