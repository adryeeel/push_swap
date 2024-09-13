/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_rra_rrb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 01:42:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:31:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_exec_rra_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb)
{
	size_t sa_ops;
	size_t sb_ops;

	sa_ops = sa->size - sa_idx;
	sb_ops = sb->size - sb_idx;

	if (sa_ops > sb_ops)
	{
		ft_rrr(sb_ops, sa, sb, true);
		ft_rra(sa_ops - sb_ops, sa, true);

		return;
	}
	else if (sb_ops > sa_ops)
	{
		ft_rrr(sa_ops, sa, sb, true);
		ft_rrb(sb_ops - sa_ops, sb, true);

		return;
	}

	ft_rrr(sa_ops, sa, sb, true);
}
