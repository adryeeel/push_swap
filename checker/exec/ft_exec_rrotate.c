/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_rrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:34:20 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_exec_rrotate(t_action act, t_stack *sa, t_stack *sb)
{
	if (act == RRA)
		ft_rra(1, sa, false);
	else if (act == RRB)
		ft_rrb(1, sb, false);
	else if (act == RRR)
		ft_rrr(1, sa, sb, false);
}
