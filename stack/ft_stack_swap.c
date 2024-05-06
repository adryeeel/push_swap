/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:35:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 00:42:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_stack_convert(int *stack, size_t size)
{
	int tmp;

	if (size <= 1)
		return (false);
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	return (true);
}
