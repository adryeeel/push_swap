/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_rra_rrb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:20:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/02 01:30:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t	ft_calc_rra_rrb(size_t sa_idx, size_t sb_idx, size_t sa_size,
		size_t sb_size)
{
	size_t	ra_ops;
	size_t	rb_ops;

	ra_ops = sa_size - sa_idx;
	rb_ops = sb_size - sb_idx;
	if (ra_ops > rb_ops)
		return (ra_ops);
	return (rb_ops);
}
