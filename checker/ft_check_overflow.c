/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 02:09:54 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 02:40:00 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define MAX_INT "2147483647"
#define MIN_INT "-2147483648"

bool ft_check_overflow(const char *stack[], size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (ft_strncmp(MAX_INT, stack[i], ft_strlen(MAX_INT)) < 0 ||
			ft_strncmp(MIN_INT, stack[i], ft_strlen(MIN_INT)) > 0)
			return (false);
		i++;
	}
	return (true);
}
