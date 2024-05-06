/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:38:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 17:15:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_convert_stack(const char *raw_stack[], size_t size)
{
	int	*int_stack;

	int_stack = ft_calloc(size, sizeof(int));
	if (!int_stack)
		return (NULL);
	while (size-- > 0)
		int_stack[size] = ft_atoi(raw_stack[size]);
	return (int_stack);
}
