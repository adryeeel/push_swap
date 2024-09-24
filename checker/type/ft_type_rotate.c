/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:20:23 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 05:59:58 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_action	ft_type_rotate(char *act)
{
	if (!ft_strncmp("ra\n", act, 3))
		return (RA);
	if (!ft_strncmp("rb\n", act, 3))
		return (RB);
	if (!ft_strncmp("rr\n", act, 3))
		return (RR);
	return (UNKNOWN);
}
