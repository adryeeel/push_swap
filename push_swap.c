/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:58:17 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 01:38:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void ft_print(int *stack, size_t size)
{
	while (size-- > 0)
	{
		ft_printf("%d ", *stack);
		stack++;
	}
	ft_printf("\n");
}

int main(int argc, char const *argv[])
{
	int *stack_a;
	size_t sa_size;

	if (argc < 2)
		return (EXIT_FAILURE);

	if (!ft_check_args(++argv, --argc))
		return (EXIT_FAILURE);

	sa_size = (size_t)argc;
	stack_a = ft_stack_convert(argv, argc);

	ft_print(stack_a, sa_size);
	ft_stack_rrotate(stack_a, sa_size);
	ft_print(stack_a, sa_size);

	return (EXIT_SUCCESS);
}
