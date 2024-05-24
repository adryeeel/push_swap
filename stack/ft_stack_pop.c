/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:17:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/25 00:10:48 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_stack_pop(t_stack *stack)
{
    int *new_data;

    if (!stack || !stack->size)
        return;

    new_data = ft_calloc(--(stack->size), sizeof(int));

    if (!new_data)
        return;

    ft_memmove(new_data, stack->data + 1, (stack->size) * sizeof(int));
    free(stack->data);
    stack->data = new_data;
}
