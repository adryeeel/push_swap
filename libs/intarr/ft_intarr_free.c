/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:38:16 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 20:54:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_intarr.h"

void	ft_intarr_free(t_intarr *intarr)
{
	if (!intarr)
		return ;
	if (intarr->data)
		free(intarr->data);
	free(intarr);
}
