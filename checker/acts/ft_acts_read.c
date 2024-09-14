/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acts_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:40:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 21:41:28 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_intarr *ft_acts_read(void)
{
	char *act;
	t_intarr *acts;

	acts = ft_intarr_create();

	if (!acts)
		return (NULL);

	act = ft_acts_readl();

	while (act)
	{
		if (!ft_acts_check(act))
		{
			free(act);
			ft_intarr_free(acts);
			ft_putendl_fd("Error", STDERR_FILENO);
			exit(EXIT_FAILURE);
		}

		ft_acts_push(&acts, act);
		free(act);
		act = ft_acts_readl();
	}

	return (acts);
}
