/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:06:48 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:25:29 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_args_push(t_strarr **input, char *s)
{
    t_strarr *new;

    new = ft_strarr_push(*input, s);
    ft_strarr_free(*input);

    *input = new;
}
