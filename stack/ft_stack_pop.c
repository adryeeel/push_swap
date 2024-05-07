/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:17:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/08 00:33:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_pop(int **stack, size_t *size)
{
    int *new_stack;

    if (!*size || !*stack)
        return;

    new_stack = ft_calloc(--(*size), sizeof(int));

    if (!new_stack)
        return;

    ft_memmove(new_stack, *stack + 1, (*size) * sizeof(int));
    free(*stack);
    *stack = new_stack;
}
