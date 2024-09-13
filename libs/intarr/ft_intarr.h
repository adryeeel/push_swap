/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:13:15 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/09 21:13:44 by arocha-b         ###   ########.fr       */
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

int ft_intarr_pop(int *intarr);
int *ft_intarr_copy(int *intarr);
int ft_intarr_shift(int *intarr);
int *ft_intarr_sort(int *intarr);
int *ft_intarr_map(int *intarr, int (*f)(int));
void ft_intarr_unshift(int *intarr, int value);
int *ft_intarr_join(int *intarr_a, int *intarr_b);
void ft_intarr_swap(int *intarr, size_t x, size_t y);
int *ft_intarr_insertat(int *intarr, size_t value, size_t index);

#endif
