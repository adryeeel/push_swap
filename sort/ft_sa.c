/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:48:53 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:25:47 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_stack *stack_a)
{
	if (!stack_a || !stack_a->size)
		return;
	
	ft_stack_swap(stack_a);
	ft_putendl_fd("sa", STDOUT_FILENO);
}
