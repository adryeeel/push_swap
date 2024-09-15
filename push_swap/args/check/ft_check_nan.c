/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 01:13:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/09/10 01:41:21 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static bool	ft_issigned(const char *s)
{
	if ((*s == '-' || *s == '+') && ft_isdigit(*(s + 1)))
		return (true);
	return (false);
}

static bool	ft_isnum(const char *s)
{
	if (!*s)
		return (false);
	if (ft_issigned(s))
		s++;
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (false);
		s++;
	}
	return (true);
}

bool	ft_check_nan(t_strarr *input)
{
	size_t	i;

	i = 0;
	while (i < input->length)
	{
		if (!ft_isnum(input->data[i]))
			return (false);
		i++;
	}
	return (true);
}
