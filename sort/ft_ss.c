/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:02:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 00:06:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ss(int *stack_a, int *stack_b, int sa_size, int sb_size)
{
	if (!ft_swap_stack(stack_a, sa_size) || !ft_swap_stack(stack_b, sb_size))
		return;

	ft_putendl_fd("ss", STDOUT_FILENO);
}
