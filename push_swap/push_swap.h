/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:07:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:47:08 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include "../libs/libft.h"

typedef struct s_stack
{
	int *data;
	size_t min;
	size_t max;
	size_t size;

} t_stack;

/**
 * Arguments functions
 */

bool ft_args_check(t_strarr *input);
void ft_args_push(t_strarr **input, char *s);
void ft_args_merge(t_strarr **input, char *s);
t_strarr *ft_args_process(char *argv[], int argc);

/**
 * Check arguments functions
 */

bool ft_check_quote(char *s);
bool ft_check_nan(t_strarr *input);
bool ft_check_dups(t_strarr *input);
bool ft_check_sort(t_strarr *input);
bool ft_check_overflow(t_strarr *input);

/**
 * Stack handling functions
 */

t_stack *ft_stack_create(void);
int ft_stack_min(t_stack *stack);
int ft_stack_max(t_stack *stack);
void ft_stack_pop(t_stack *stack);
void ft_stack_swap(t_stack *stack);
void ft_stack_print(t_stack *stack);
void ft_stack_rotate(t_stack *stack);
void ft_stack_rrotate(t_stack *stack);
void ft_stack_destroy(t_stack *stack);
void ft_stack_process(t_strarr *input);
void ft_stack_init(t_stack **stack, char *data[]);
void ft_stack_push(t_stack *stack, int new_value);
int *ft_stack_convert(char *input[], size_t size);
void ft_stack_sort(t_stack *stack_a, t_stack *stack_b);

/**
 * Sort actions functions
 */

void ft_pa(size_t n, t_stack *stack_a, t_stack *stack_b, bool print);
void ft_pb(size_t n, t_stack *stack_a, t_stack *stack_b, bool print);

void ft_sa(size_t n, t_stack *stack_a, bool print);
void ft_sb(size_t n, t_stack *stack_b, bool print);
void ft_ss(size_t n, t_stack *stack_a, t_stack *stack_b, bool print);

void ft_ra(size_t n, t_stack *stack_a, bool print);
void ft_rb(size_t n, t_stack *stack_b, bool print);
void ft_rr(size_t n, t_stack *stack_a, t_stack *stack_b, bool print);

void ft_rra(size_t n, t_stack *stack_a, bool print);
void ft_rrb(size_t n, t_stack *stack_b, bool print);
void ft_rrr(size_t n, t_stack *stack_a, t_stack *stack_b, bool print);

void ft_solve_three(t_stack *stack_a);
void ft_solve_sa(t_stack *stack_a, t_stack *stack_b);
void ft_solve_sb(t_stack *stack_a, t_stack *stack_b);

/**
 * Check stack functions
 */

bool ft_check_sa(t_stack *stack_a);
bool ft_check_sb(t_stack *stack_b);

/**
 * Find insertion index functions
 */

size_t ft_find_place_sa(t_stack *stack_a, int value);
size_t ft_find_place_sb(t_stack *stack_b, int value);

/**
 * Find lightest index functions
 */

size_t ft_find_least_sa(t_stack *stack_a, t_stack *stack_b);
size_t ft_find_least_sb(t_stack *stack_a, t_stack *stack_b);

/**
 * Calc insertion cost functions
 */

size_t ft_calc_ra_rb(size_t sa_idx, size_t sb_idx);
size_t ft_calc_ra_rrb(size_t sa_idx, size_t sb_idx, size_t sa_size, size_t sb_size);
size_t ft_calc_rra_rb(size_t sa_idx, size_t sb_idx, size_t sa_size, size_t sb_size);
size_t ft_calc_rra_rrb(size_t sa_idx, size_t sb_idx, size_t sa_size, size_t sb_size);
size_t ft_calc_total_ops(size_t sa_idx, size_t sb_idx, size_t sa_size, size_t sb_size);

/**
 * Exec stack operations functions
 */

void ft_sort_exec_sa(t_stack *stack_a, t_stack *stack_b);
void ft_sort_exec_sb(t_stack *stack_a, t_stack *stack_b);
void ft_exec_ra_rb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb);
void ft_exec_ra_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb);
void ft_exec_rra_rb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb);
void ft_exec_rra_rrb(size_t sa_idx, size_t sb_idx, t_stack *sa, t_stack *sb);

#endif
