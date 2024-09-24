/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:57:08 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/24 06:11:04 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int argc, char const *argv[])
{
	t_strarr *input;

	if (argc-- < 2)
		return (EXIT_FAILURE);
	input = ft_args_process((char **)++argv, argc);
	if (!ft_args_check(input))
	{
		ft_strarr_free(input);
		return (EXIT_FAILURE);
	}
	if (!ft_checker_process(input))
	{
		ft_strarr_free(input);
		ft_putendl_fd("Error", STDERR_FILENO);
		return (EXIT_FAILURE);
	}
	ft_strarr_free(input);
	return (EXIT_SUCCESS);
}
