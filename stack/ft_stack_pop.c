/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:17:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/07 00:42:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_pop(int **stack, size_t *size)
{
    int *new_stack;

    if (*size == 0)
        return;

    new_stack = ft_calloc(--(*size), sizeof(int));

    if (!new_stack)
        return;

    while ((*size)-- > 0)
        new_stack[*size] = (*stack)[*size];

    free(*stack);
    *stack = new_stack;
}
