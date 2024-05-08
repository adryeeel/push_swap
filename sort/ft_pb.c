/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:57:22 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 00:58:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(int **stack_a, int **stack_b, size_t *sa_size, size_t *sb_size)
{
	if (*sa_size == 0)
		return;

	ft_stack_push(stack_b, **stack_a, sb_size);
	ft_stack_pop(stack_a, sa_size);

	ft_putendl_fd("pb", STDOUT_FILENO);
}
