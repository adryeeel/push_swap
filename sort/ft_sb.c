/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:55:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:26:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sb(t_stack *stack_b)
{
	if (!stack_b || !stack_b->size)
		return;
	
	ft_stack_swap(stack_b);
	ft_putendl_fd("sb", STDOUT_FILENO);
}
