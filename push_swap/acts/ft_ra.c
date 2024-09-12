/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:48:06 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:27:21 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_ra(size_t n, t_stack *stack_a, bool print)
{
	if (!stack_a || !stack_a->size)
		return;

	while (n-- > 0)
	{
		ft_stack_rotate(stack_a);

		if (print)
			ft_putendl_fd("ra", STDOUT_FILENO);
	}
}
