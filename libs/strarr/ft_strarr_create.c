/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:55:58 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:57:50 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"

t_strarr	*ft_strarr_create(void)
{
	t_strarr	*new;

	new = ft_calloc(1, sizeof(t_strarr));
	if (!new)
		return (NULL);
	new->length = 0;
	new->data = NULL;
	return (new);
}
