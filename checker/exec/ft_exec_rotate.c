/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:34:14 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"	

void ft_exec_rotate(t_action act, t_stack *sa, t_stack *sb)
{
	if (act == RA)
		ft_ra(1, sa, false);
	else if (act == RB)
		ft_rb(1, sb, false);
	else if (act == RR)
		ft_rr(1, sa, sb, false);
}
