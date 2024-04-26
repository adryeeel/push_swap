/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 00:58:17 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/26 17:22:52 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int main(int argc, char const *argv[])
{
	if (argc < 2)
		return (EXIT_FAILURE);
	
	if (!ft_check_args(++argv, --argc))
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
