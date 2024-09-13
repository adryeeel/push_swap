/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:14:12 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:15:55 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRARR_H
#define FT_STRARR_H

#define NULL_BYTE 1

#include <stdlib.h>
#include "../mem/ft_mem.h"
#include "../string/ft_string.h"

typedef struct s_strarr
{
	char **data;
	size_t length;
} t_strarr;

t_strarr *ft_strarr_create(void);
void ft_strarr_free(t_strarr *strarr);
size_t ft_strarr_length(char *strarr[]);
t_strarr *ft_strarr_push(t_strarr *strarr, char *str);
t_strarr *ft_strarr_merge(t_strarr *strarr_a, t_strarr *strarr_b);

char **ft_strarr_pop(char *strarr[]);
char **ft_strarr_copy(char *strarr[]);
char **ft_strarr_sort(char *strarr[]);
char **ft_strarr_shift(char *strarr[]);
char *ft_strarr_join(char *strarr[], char sep);
char **ft_strarr_unshift(char *strarr[], char *str);
void ft_strarr_swap(char *strarr[], size_t x, size_t y);
char **ft_strarr_map(char *strarr[], char *(*f)(char *));
char **ft_strarr_insertat(char *strarr[], char *str, size_t index);

#endif
