/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 00:17:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/05/24 18:34:57 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool ft_stack_pop(t_stack *stack)
{
    int *new_data;

    if (!stack->size || !stack)
        return (false);

    new_data = ft_calloc(--(stack->size), sizeof(int));

    if (!new_data)
        return (false);

    ft_memmove(new_data, stack->data + 1, (stack->size) * sizeof(int));
    free(stack->data);
    stack->data = new_data;

    return (true);
}
