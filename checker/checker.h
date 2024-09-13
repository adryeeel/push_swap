/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:11:58 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 02:02:10 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2
#endif

typedef enum e_action
{
	PA,
	PB,
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
} t_action;

#include "../push_swap/push_swap.h"

/**
 * Main functions
 */

void ft_checker_process(t_strarr *input);

/**
 * Actions handling functions
 */

char *ft_acts_readl(void);
t_intarr *ft_acts_read(void);
bool ft_acts_check(char *act);
t_action ft_acts_type(char *act);
void ft_acts_push(t_intarr **acts, char *act);
void ft_acts_exec(t_intarr *acts, t_stack *sa, t_stack *sb);

/**
 * Validate action functions
 */

bool ft_check_swap(char *act);
bool ft_check_push(char *act);
bool ft_check_rotate(char *act);
bool ft_check_rrotate(char *act);

/**
 * Action type getter functions
 */

t_action ft_type_swap(char *act);
t_action ft_type_push(char *act);
t_action ft_type_rotate(char *act);
t_action ft_type_rrotate(char *act);

/**
 * Exec action functions
 */

void ft_exec_swap(t_action act, t_stack *sa, t_stack *sb);
void ft_exec_push(t_action act, t_stack *sa, t_stack *sb);
void ft_exec_rotate(t_action act, t_stack *sa, t_stack *sb);
void ft_exec_rrotate(t_action act, t_stack *sa, t_stack *sb);

#endif
