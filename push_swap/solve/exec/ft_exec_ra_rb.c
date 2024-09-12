/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ra_rb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:42:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:30:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_exec_ra_rb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb)
{
	if (sa_idx > sb_idx)
	{
		ft_rr(sb_idx, sa, sb, true);
		ft_ra(sa_idx - sb_idx, sa, true);

		return;
	}
	else if (sb_idx > sa_idx)
	{
		ft_rr(sa_idx, sa, sb, true);
		ft_rb(sb_idx - sa_idx, sb, true);

		return;
	}

	ft_rr(sa_idx, sa, sb, true);
}
