/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:38:16 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 21:46:46 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_intarr.h"

static void ft_copy(int *dst, int *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

t_intarr *ft_intarr_push(t_intarr *intarr, int value)
{
	t_intarr *new;
	
	if (!intarr)
		return (NULL);	

	new = ft_intarr_create();

	if (!new)
		return (NULL);	

	new->length = intarr->length + 1;
	new->data = ft_calloc(intarr->length + 1, sizeof(int));
	
	if (!new->data)
	{
		free(new);
		return (NULL);
	}

	ft_copy(new->data, intarr->data, intarr->length);
	new->data[intarr->length] = value;

	return (new);
}
