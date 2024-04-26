/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:13:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 02:27:58 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_check_nan(const char *stack[], size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (!ft_isdigit(stack[i][0]))
			return (false);
		i++;
	}
	return (true);
}
