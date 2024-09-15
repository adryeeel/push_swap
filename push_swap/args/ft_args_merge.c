/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:07:10 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/15 01:10:15 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_args_merge(t_strarr **input, char *s)
{
	t_strarr	*new;
	t_strarr	*split;

	split = ft_strarr_create();
	if (!split)
		return ;
	split->data = ft_split(s, ' ');
	if (!split->data)
		return ;
	split->length = ft_strarr_length(split->data);
	new = ft_strarr_merge(*input, split);
	ft_strarr_free(*input);
	ft_strarr_free(split);
	*input = new;
}
