/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_exec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:29:31 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:09:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void ft_acts_exec(t_intarr *acts, t_stack *sa, t_stack *sb)
{
	size_t i;
	t_action act;

	i = 0;
	while (i < acts->length)
	{
		act = acts->data[i];

		if (act >= PA && act <= PB)
			ft_exec_push(act, sa, sb);

		else if (act >= SA && act <= SS)
			ft_exec_swap(act, sa, sb);

		else if (act >= RA && act <= RR)
			ft_exec_rotate(act, sa, sb);

		else if (act >= RRA && act <= RRR)
			ft_exec_rrotate(act, sa, sb);
		i++;
	}
}
