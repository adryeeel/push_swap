/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:22:26 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:28:15 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(size_t n, t_stack *stack_a, bool print)
{
	if (!stack_a || !stack_a->size)
		return ;
	while (n-- > 0)
	{
		ft_stack_rrotate(stack_a);
		if (print)
			ft_putendl_fd("rra", STDOUT_FILENO);
	}
}
