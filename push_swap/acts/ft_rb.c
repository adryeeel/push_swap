/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:58:41 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:27:49 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(size_t n, t_stack *stack_b, bool print)
{
	if (!stack_b || !stack_b->size)
		return ;
	while (n-- > 0)
	{
		ft_stack_rotate(stack_b);
		if (print)
			ft_putendl_fd("rb", STDOUT_FILENO);
	}
}
