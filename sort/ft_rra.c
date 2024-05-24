/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:22:26 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:28:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rra(t_stack *stack_a)
{
	if (!stack_a || !stack_a->size)
		return;

	ft_stack_rrotate(stack_a);
	ft_putendl_fd("rra", STDOUT_FILENO);
}
