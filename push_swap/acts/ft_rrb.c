/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:22:45 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:28:32 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(size_t n, t_stack *stack_b, bool print)
{
	if (!stack_b || !stack_b->size)
		return ;
	while (n-- > 0)
	{
		ft_stack_rrotate(stack_b);
		if (print)
			ft_putendl_fd("rrb", STDOUT_FILENO);
	}
}
