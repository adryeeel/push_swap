/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 23:48:53 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 20:33:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(int *stack_a, size_t size_a)
{
	if (!ft_stack_swap(stack_a, size_a))
		return;

	ft_putendl_fd("sa", STDOUT_FILENO);
}
