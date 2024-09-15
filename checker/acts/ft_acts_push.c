/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:48:56 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 21:30:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_acts_push(t_intarr **acts, char *act)
{
	t_intarr	*new;
	t_action	action;

	action = ft_acts_type(act);
	new = ft_intarr_push(*acts, (int)action);
	ft_intarr_free(*acts);
	*acts = new;
}
