/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rank.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:55:55 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 16:28:45 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_rank(t_list **tabtab, int argc)
{
	int	min;
	int	current;
	int	rank;

	rank = 1;
	while (rank <= argc)
	{
		current = 0;
		while (current < argc)
		{
			while (tabtab[0][current].rank > 0)
				current++;
			min = current;
			while (current < argc)
			{
				if (tabtab[0][current].value < tabtab[0][min].value
					&& tabtab[0][current].rank < 1)
					min = current;
				else
					current++;
			}
		}
		tabtab[0][min].rank = rank;
		rank++;
	}
}
