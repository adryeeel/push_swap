/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:35:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/24 18:19:04 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_stack_swap(t_stack *stack)
{
	int tmp;

	if (stack->size <= 1 || !stack)
		return (false);

	tmp = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = tmp;

	return (true);
}
