/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:07:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 23:58:40 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int *data;
	size_t size;

} t_stack;

bool ft_check_nan(const char *raw_stack[], size_t size);
bool ft_check_sort(const char *raw_stack[], size_t size);
bool ft_check_args(const char *raw_stack[], size_t size);
bool ft_check_dups(const char *raw_stack[], size_t size);
bool ft_check_overflow(const char *raw_stack[], size_t size);

void ft_stack_pop(t_stack *stack);
void ft_stack_swap(t_stack *stack);
void ft_stack_rotate(t_stack *stack);
void ft_stack_rrotate(t_stack *stack);
void ft_stack_destroy(t_stack *stack);
void ft_stack_push(t_stack *stack, int new_value);
int *ft_stack_convert(const char **raw_stack, size_t size);
t_stack *ft_stack_create(const char **raw_stack, size_t size);

void ft_sa(t_stack *stack_a);
void ft_sb(t_stack *stack_b);
void ft_ss(t_stack *stack_a, t_stack *stack_b);

void ft_ra(t_stack *stack_a);
void ft_rb(t_stack *stack_b);
void ft_rr(t_stack *stack_a, t_stack *stack_b);

void ft_rra(t_stack *stack_a);
void ft_rrb(t_stack *stack_b);
void ft_rrr(t_stack *stack_a, t_stack *stack_b);

void ft_pa(t_stack *stack_a, t_stack *stack_b);
void ft_pb(t_stack *stack_a, t_stack *stack_b);

#endif
