/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:07:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 00:37:59 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include "libft/libft.h"


bool ft_check_nan(const char *stack[], size_t size);
bool ft_check_args(const char *stack[], size_t size);
bool ft_check_dups(const char *stack[], size_t size);
bool ft_check_overflow(const char *stack[], size_t size);

void ft_sa(int *stack_a, size_t size_a);
void ft_sb(int *stack_b, size_t size_b);
void ft_ss(int *stack_a, int *stack_b, int sa_size, int sb_size);

bool ft_stack_swap(int *stack, size_t size);
void ft_stack_pop(int **stack, size_t *size);
int *ft_stack_convert(const char **raw_stack, size_t size);
void ft_stack_push(int **stack, int new_value, size_t *size);

#endif
