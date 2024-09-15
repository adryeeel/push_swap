/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:12:01 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/14 18:10:42 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_action	ft_acts_type(char *act)
{
	t_action	action;

	action = ft_type_push(act);
	if (action != UNKNOWN)
		return (action);
	action = ft_type_swap(act);
	if (action != UNKNOWN)
		return (action);
	action = ft_type_rotate(act);
	if (action != UNKNOWN)
		return (action);
	action = ft_type_rrotate(act);
	if (action != UNKNOWN)
		return (action);
	return (-1);
}
