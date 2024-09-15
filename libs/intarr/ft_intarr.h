/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:13:15 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/15 21:20:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTARR_H
#define FT_INTARR_H

#include <stdlib.h>
#include "../mem/ft_mem.h"
#include "../string/ft_string.h"

typedef struct intarr
{
	int *data;
	size_t length;

} t_intarr;

t_intarr *ft_intarr_create(void);
void ft_intarr_free(t_intarr *intarr);
t_intarr *ft_intarr_push(t_intarr *intarr, int value);

#endif
