/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_rra_rb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:42:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:31:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	ft_exec_optim_ra_rb(size_t sa_idx, size_t sb_idx, t_stack *sa,
		t_stack *sb)
{
	size_t	max;
	size_t	rra_ops;

	max = sa_idx;
	rra_ops = sa->size - sa_idx;
	if (max < sb_idx)
		max = sb_idx;
	if (max > rra_ops + sb_idx)
		return (false);
	ft_exec_ra_rb(sa_idx, sb_idx, sa, sb);
	return (true);
}

bool	ft_exec_optim_rrr_rra(size_t sa_idx, size_t sb_idx, t_stack *sa,
		t_stack *sb)
{
	size_t	rra_ops;

	if (sb_idx != sb_idx / 2)
		return (false);
	rra_ops = sa->size - sa_idx;
	ft_rrr(sb_idx, sa, sb, true);
	if (rra_ops > sb_idx)
		ft_rra(rra_ops - sb_idx, sa, true);
	return (true);
}

void	ft_exec_rra_rb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb)
{
	if (ft_exec_optim_ra_rb(sa_idx, sb_idx, sa, sb))
		return ;
	if (ft_exec_optim_rrr_rra(sa_idx, sb_idx, sa, sb))
		return ;
	ft_rra(sa->size - sa_idx, sa, true);
	ft_rb(sb_idx, sb, true);
}
