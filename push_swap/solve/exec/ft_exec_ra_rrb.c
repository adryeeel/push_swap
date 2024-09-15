/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ra_rrb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:42:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:31:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

bool	ft_exec_optim_rra_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa,
		t_stack *sb)
{
	size_t	max;
	size_t	rb_ops;
	size_t	ra_ops;

	ra_ops = sa->size - sa_idx;
	rb_ops = sb->size - sb_idx;
	max = ra_ops;
	if (max < rb_ops)
		max = rb_ops;
	if (max > rb_ops + sa_idx)
		return (false);
	ft_exec_rra_rrb(sa_idx, sb_idx, sa, sb);
	return (true);
}

bool	ft_exec_optim_rrr_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa,
		t_stack *sb)
{
	size_t	rrb_ops;

	if (sa_idx != sa->size / 2)
		return (false);
	rrb_ops = sb->size - sb_idx;
	ft_rrr(sa_idx, sa, sb, true);
	if (rrb_ops > sa_idx)
		ft_rrb(rrb_ops - sa_idx, sb, true);
	return (true);
}

void	ft_exec_ra_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb)
{
	if (ft_exec_optim_rra_rrb(sa_idx, sb_idx, sa, sb))
		return ;
	if (ft_exec_optim_rrr_rrb(sa_idx, sb_idx, sa, sb))
		return ;
	ft_ra(sa_idx, sa, true);
	ft_rrb(sb->size - sb_idx, sb, true);
}
