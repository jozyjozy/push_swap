/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:46:21 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/14 15:26:29 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *nptr, int checker)
{
	int		i;
	int		s;
	long	result;

	i = 0;
	result = 0;
	s = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] > '9' || nptr[i] < '0')
			checker++;
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (s * result);
}
