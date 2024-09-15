/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:49:59 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 00:58:26 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_intarr.h"

t_intarr	*ft_intarr_create(void)
{
	t_intarr	*intarr;

	intarr = ft_calloc(1, sizeof(t_intarr));
	if (!intarr)
		return (NULL);
	intarr->length = 0;
	intarr->data = NULL;
	return (intarr);
}
