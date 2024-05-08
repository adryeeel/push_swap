/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:58:41 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 01:58:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_rb(int *stack_b, size_t size)
{
	if (!stack_b || !size)
		return;

	ft_stack_rotate(stack_b, size);
	ft_putendl_fd("rb", STDOUT_FILENO);
}
