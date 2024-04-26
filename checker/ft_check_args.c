/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:11:58 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 02:36:05 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_check_args(const char *stack[], size_t size)
{
	if (!ft_check_nan(stack, size))
	{
		ft_putendl_fd("Error: The provided stack has non-number values.", STDERR_FILENO);
		return (false);
	}
	else if (!ft_check_dups(stack, size))
	{
		ft_putendl_fd("Error: The provided stack has duplicated values.", STDERR_FILENO);
		return (false);
	}
	else if (!ft_check_overflow(stack, size))
	{
		ft_putendl_fd("Error: The provided stack has values outside the integer ranges.", STDERR_FILENO);
		return (false);
	}
	else
		return (true);
}
