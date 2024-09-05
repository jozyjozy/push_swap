/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubloons.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:49:28 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/28 14:30:19 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubloons(t_list *str, int argc)
{
	int	i;
	int	j;
	int	doubloons;

	i = 0;
	doubloons = 0;
	while (i <= argc - 1)
	{
		j = i + 1;
		while (j <= argc - 1)
		{
			if (str[i].value == str[j].value)
				doubloons++;
			j++;
		}
		i++;
	}
	return (doubloons);
}
