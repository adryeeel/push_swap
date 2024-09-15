/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 01:00:26 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/04 17:41:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	ft_check_sa(t_stack *stack_a)
{
	size_t	i;

	i = 0;
	while (i < stack_a->size - 1)
	{
		if (stack_a->data[i] > stack_a->data[i + 1])
			return (false);
		i++;
	}
	return (true);
}
