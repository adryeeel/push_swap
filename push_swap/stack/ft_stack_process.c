/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_process.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:53:09 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:46:19 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_process(t_strarr *input)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = ft_stack_create();
	stack_b = ft_stack_create();

	if (!stack_a || !stack_b)
		return;

	ft_stack_init(&stack_b, NULL);
	ft_stack_init(&stack_a, input->data);

	ft_stack_sort(stack_a, stack_b);

	ft_stack_destroy(stack_a);
	ft_stack_destroy(stack_b);
}
