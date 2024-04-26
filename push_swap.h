/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:07:13 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 17:04:03 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include "libft/libft.h"

int *ft_convert_stack(const char *raw_stack[], size_t size);

bool ft_check_nan(const char *stack[], size_t size);
bool ft_check_args(const char *stack[], size_t size);
bool ft_check_dups(const char *stack[], size_t size);
bool ft_check_overflow(const char *stack[], size_t size);

#endif