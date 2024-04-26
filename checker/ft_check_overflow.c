/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 02:09:54 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 15:37:32 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../push_swap.h"

bool ft_check_overflow(const char *stack[], size_t size)
{
	size_t i;
	long value;

	i = 0;
	while (i < size)
	{
		value = atol(stack[i]);
		if (value > INT_MAX || value < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}
