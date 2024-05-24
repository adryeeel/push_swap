/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:02:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:27:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_b || !stack_a->size || !stack_b->size)
		return;

	ft_stack_swap(stack_a);
	ft_stack_swap(stack_b);

	ft_putendl_fd("ss", STDOUT_FILENO);
}
