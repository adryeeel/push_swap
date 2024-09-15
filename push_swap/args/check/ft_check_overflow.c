/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 02:09:54 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:42:38 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <limits.h>

bool	ft_check_overflow(t_strarr *input)
{
	size_t	i;
	long	value;

	i = 0;
	while (i < input->length)
	{
		value = atol(input->data[i]);
		if (value > INT_MAX || value < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}
