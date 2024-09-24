/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:40:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 07:45:47 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_intarr	*ft_acts_read(void)
{
	char		*act;
	t_intarr	*acts;

	acts = ft_intarr_create();
	act = ft_acts_readl();
	if (!act || !acts)
		return (NULL);
	while (act)
	{
		if (!ft_acts_check(act))
		{
			free(act);
			ft_intarr_free(acts);
			return (NULL);
		}
		ft_acts_push(&acts, act);
		free(act);
		act = ft_acts_readl();
	}
	return (acts);
}
