/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:02:35 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:34:09 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_exec_push(t_action act, t_stack *sa, t_stack *sb)
{
	if (act == PA)
		ft_pa(1, sa, sb, false);
	else if (act == PB)
		ft_pb(1, sa, sb, false);
}
