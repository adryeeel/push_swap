/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:14:47 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 00:47:30 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(int **stack_a, int **stack_b, size_t *sa_size, size_t *sb_size)
{
	if (*sb_size == 0)
		return;

	ft_stack_push(stack_a, **stack_b, sa_size);
	ft_stack_pop(stack_b, sb_size);
	
	ft_putendl_fd("pa", STDOUT_FILENO);
}
