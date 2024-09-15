/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:34:25 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_exec_swap(t_action act, t_stack *sa, t_stack *sb)
{
	if (act == SA)
		ft_sa(1, sa, false);
	else if (act == SB)
		ft_sb(1, sb, false);
	else if (act == SS)
		ft_ss(1, sa, sb, false);
}
