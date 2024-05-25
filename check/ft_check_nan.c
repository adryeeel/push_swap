/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:13:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 23:57:43 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static bool ft_isnum(const char *s)
{
	while (*s)
	{
		if (!ft_isdigit(*s) && *s != '-' && *s != '+')
			return (false);
		s++;
	}
	return (true);
}

bool ft_check_nan(const char *raw_stack[], size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (!ft_isnum(raw_stack[i]))
			return (false);
		i++;
	}
	return (true);
}
