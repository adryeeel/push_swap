/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:19:33 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 06:00:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_action	ft_type_swap(char *act)
{
	if (!ft_strncmp("sa\n", act, 3))
		return (SA);
	if (!ft_strncmp("sb\n", act, 3))
		return (SB);
	if (!ft_strncmp("ss\n", act, 3))
		return (SS);
	return (UNKNOWN);
}
