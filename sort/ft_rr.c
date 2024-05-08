/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:15:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/09 00:18:17 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rr(int *stack_a, int *stack_b, size_t sa_size, size_t sb_size)
{
	if (!stack_a || !stack_b || !sa_size || !sb_size)
		return;

	ft_stack_rotate(stack_a, sa_size);
	ft_stack_rotate(stack_b, sb_size);

	ft_putendl_fd("rr", STDOUT_FILENO);
}
