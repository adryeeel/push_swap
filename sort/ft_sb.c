/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:55:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 20:34:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sb(int *stack_b, size_t size_b)
{
	if (!ft_stack_swap(stack_b, size_b))
		return;

	ft_putendl_fd("sb", STDOUT_FILENO);
}