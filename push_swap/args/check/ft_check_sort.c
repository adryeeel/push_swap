/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 00:32:38 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:38:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool ft_check_sort(t_strarr *input)
{
	int curr;
	int prev;
	size_t len;

	len = input->length;
	while (--len > 0)
	{
		curr = ft_atoi(input->data[len]);
		prev = ft_atoi(input->data[len - 1]);

		if (curr < prev)
			return (false);
	}
	return (true);
}
