/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:55:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:29:07 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sb(size_t n, t_stack *stack_b, bool print)
{
	if (!stack_b || !stack_b->size)
		return;

	while (n-- > 0)
	{
		ft_stack_swap(stack_b);

		if (print)
			ft_putendl_fd("sb", STDOUT_FILENO);
	}
}
