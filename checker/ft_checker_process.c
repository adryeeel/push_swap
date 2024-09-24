/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_process.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:15:21 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 06:07:43 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

bool	ft_checker_process(t_strarr *input)
{
	t_intarr	*acts;
	t_stack		*stack_a;
	t_stack		*stack_b;

	acts = ft_acts_read();
	if (!acts)
		return (false);
	stack_a = ft_stack_create();
	stack_b = ft_stack_create();
	if (!stack_a || !stack_b)
		return (false);
	ft_stack_init(&stack_b, NULL);
	ft_stack_init(&stack_a, input->data);
	ft_acts_exec(acts, stack_a, stack_b);
	if (!ft_check_sa(stack_a) || stack_b->size)
		ft_putendl_fd("KO", STDERR_FILENO);
	else
		ft_putendl_fd("OK", STDOUT_FILENO);
	ft_intarr_free(acts);
	ft_stack_destroy(stack_a);
	ft_stack_destroy(stack_b);
	return (true);
}
