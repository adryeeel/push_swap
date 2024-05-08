/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:38 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 01:49:51 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_stack_rotate(int *stack, size_t size)
{
	int tmp;
	
	if (!stack || !size)
		return (false);

	tmp = stack[size - 1];

	if (!ft_memmove(stack + 1, stack, (size) * sizeof(int)))
		return (false);

	stack[0] = tmp;
	return (true);
}
