/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_rra_rb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:19:49 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/03 18:04:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_calc_rra_rb(size_t sa_idx, size_t sb_idx, size_t sa_size,
		size_t sb_size)
{
	size_t	total;
	size_t	ra_ops;
	size_t	rb_ops;

	ra_ops = sa_size - sa_idx;
	rb_ops = sb_size - sb_idx;
	total = rb_ops;
	if (ra_ops > rb_ops)
		total = ra_ops;
	if (total < sb_idx + ra_ops)
		return (total);
	return (sb_idx + ra_ops);
}
