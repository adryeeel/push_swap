/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:48:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 01:52:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ra(int *stack_a, size_t size)
{
	if (!stack_a || !size)
		return;

	ft_stack_rotate(stack_a, size);
	ft_putendl_fd("ra", STDOUT_FILENO);
}
