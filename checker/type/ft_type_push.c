/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:19:40 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:10:18 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_action	ft_type_push(char *act)
{
	if (!ft_strncmp("pa\n", act, 3))
		return (PA);
	if (!ft_strncmp("pb\n", act, 3))
		return (PB);
	return (-1);
}
