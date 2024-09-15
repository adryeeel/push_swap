/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:36:42 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/14 18:11:23 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

bool	ft_acts_check(char *act)
{
	if (ft_type_push(act) != UNKNOWN)
		return (true);
	if (ft_type_swap(act) != UNKNOWN)
		return (true);
	if (ft_type_rotate(act) != UNKNOWN)
		return (true);
	if (ft_type_rrotate(act) != UNKNOWN)
		return (true);
	return (false);
}
