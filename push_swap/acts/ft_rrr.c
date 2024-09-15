/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:23:07 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:28:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(size_t n, t_stack *stack_a, t_stack *stack_b, bool print)
{
	if (!stack_a || !stack_b || !stack_a->size || !stack_b->size)
		return ;
	while (n-- > 0)
	{
		ft_stack_rrotate(stack_a);
		ft_stack_rrotate(stack_b);
		if (print)
			ft_putendl_fd("rrr", STDOUT_FILENO);
	}
}
