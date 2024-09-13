/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:11:58 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:40:09 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_args_check(t_strarr *input)
{
	if (!ft_check_nan(input) ||
		!ft_check_dups(input) ||
		!ft_check_overflow(input))
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return (false);
	}

	return (true);
}
