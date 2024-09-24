/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_rrotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:20:55 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 06:00:00 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_action	ft_type_rrotate(char *act)
{
	if (!ft_strncmp("rra\n", act, 4))
		return (RRA);
	if (!ft_strncmp("rrb\n", act, 4))
		return (RRB);
	if (!ft_strncmp("rrr\n", act, 4))
		return (RRR);
	return (UNKNOWN);
}
