/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_total_ops.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:14:52 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/03 12:34:07 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t ft_calc_total_ops(size_t sa_idx, size_t sb_idx, size_t sa_size, size_t sb_size)
{
	size_t ops;
	size_t total;

	total = ft_calc_ra_rb(sa_idx, sb_idx);
	ops = ft_calc_rra_rrb(sa_idx, sb_idx, sa_size, sb_size);

	if (total > ops)
		total = ops;

	ops = ft_calc_ra_rrb(sa_idx, sb_idx, sa_size, sb_size);

	if (total > ops)
		total = ops;

	ops = ft_calc_rra_rb(sa_idx, sb_idx, sa_size, sb_size);

	if (total > ops)
		total = ops;

	return (total);
}
