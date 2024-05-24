/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:58:41 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:22:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rb(t_stack *stack_b)
{
	if (!stack_b || !stack_b->size)
		return;

	ft_stack_rotate(stack_b);
	ft_putendl_fd("rb", STDOUT_FILENO);
}
