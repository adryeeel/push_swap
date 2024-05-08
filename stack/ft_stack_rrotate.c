/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 01:38:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_stack_rrotate(int *stack, size_t size)
{
	int tmp;

	tmp = stack[0];

	if (!ft_memmove(stack, stack + 1, (size) * sizeof(int)))
		return (false);

	stack[size - 1] = tmp;
	return (true);
}
