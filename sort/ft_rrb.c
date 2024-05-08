/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:22:45 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/09 00:22:55 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rrb(int *stack_b, size_t size)
{
	if (!stack_b || !size)
		return;

	ft_stack_rrotate(stack_b, size);
	ft_putendl_fd("rrb", STDOUT_FILENO);
}
