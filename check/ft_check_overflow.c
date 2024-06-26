/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 02:09:54 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 23:58:30 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../push_swap.h"

bool ft_check_overflow(const char *raw_stack[], size_t size)
{
	size_t i;
	long value;

	i = 0;
	while (i < size)
	{
		value = atol(raw_stack[i]);
		if (value > INT_MAX || value < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}
