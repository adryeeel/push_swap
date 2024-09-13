/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:48:53 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:28:58 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(size_t n, t_stack *stack_a, bool print)
{
	if (!stack_a || !stack_a->size)
		return;

	while (n-- > 0)
	{
		ft_stack_swap(stack_a);

		if (print)
			ft_putendl_fd("sa", STDOUT_FILENO);
	}
}
