/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:58:17 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:44:37 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, const char *argv[])
{
	t_strarr	*input;

	if (argc-- < 2)
		return (EXIT_FAILURE);
	input = ft_args_process((char **)++argv, argc);
	if (!ft_args_check(input))
	{
		ft_strarr_free(input);
		return (EXIT_FAILURE);
	}
	if (ft_check_sort(input))
	{
		ft_strarr_free(input);
		return (EXIT_SUCCESS);
	}
	ft_stack_process(input);
	ft_strarr_free(input);
	return (EXIT_SUCCESS);
}
