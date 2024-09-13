/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_ra_rb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:20:01 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/01 02:02:22 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

size_t ft_calc_ra_rb(size_t sa_idx, size_t sb_idx)
{
	if (sa_idx > sb_idx)
		return (sa_idx);
	return (sb_idx);
}
