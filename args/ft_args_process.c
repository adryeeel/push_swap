/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_process.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:34:41 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 19:26:34 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_strarr *ft_args_process(char *argv[], int argc)
{
	int i;
	t_strarr *input;

	i = 0;
	input = ft_strarr_create();

	if (!input)
		return (NULL);

	while (i < argc)
	{
		if (ft_check_quote(argv[i]))
			ft_args_merge(&input, argv[i]);
		else
			ft_args_push(&input, argv[i]);
		i++;
	}

	return (input);
}
