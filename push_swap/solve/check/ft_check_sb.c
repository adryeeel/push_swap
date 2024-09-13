/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 01:02:55 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/04 17:41:43 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool ft_check_sb(t_stack *stack_b)
{
	size_t i;

	i = 0;

	while (i < stack_b->size - 1)
	{
		if (stack_b->data[i] < stack_b->data[i + 1])
			return (false);
		i++;
	}

	return (true);
}
