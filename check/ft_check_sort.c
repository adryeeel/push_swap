/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 00:32:38 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/26 00:22:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_check_sort(const char *raw_stack[], size_t size)
{
	int curr;
	int prev;

	while (--size > 0)
	{
		curr = ft_atoi(raw_stack[size]);
		prev = ft_atoi(raw_stack[size - 1]);

		if (curr < prev)
			return (false);
	}
	return (true);
}
