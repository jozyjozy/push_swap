/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_column2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:29:45 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/04 15:12:41 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	putin_column2_4_5(t_list **tabtab, t_count *pc)
{
	int	i;

	i = 0;
	while (i != 2)
	{
		if (tabtab[0][1].rank == 1 || tabtab[0][1].rank == 2)
			swap_a(tabtab, pc);
		else if (tabtab[0][2].rank == 1 || tabtab[0][2].rank == 2)
		{
			rotate_a(tabtab, pc);
			swap_a(tabtab, pc);
		}
		else if (tabtab[0][3].rank == 1 || tabtab[0][3].rank == 2)
		{
			while (tabtab[0][0].rank != 1 && tabtab[0][0].rank != 2)
				reverse_rotate_a(tabtab, pc);
		}
		else if (tabtab[0][4].rank == 1 || tabtab[0][4].rank == 2)
		{
			while (tabtab[0][0].rank != 1 && tabtab[0][0].rank != 2)
				reverse_rotate_a(tabtab, pc);
		}
		push_b(tabtab, pc);
		i++;
	}
}

void	putin_column2_complex(t_list **tabtab, t_count *pc)
{
	int	last_rank_column1;
	int	i;

	i = 0;
	last_rank_column1 = pc->nb_pile_a / 2;
	while (i < last_rank_column1)
	{
		if (tabtab[0][0].rank <= last_rank_column1)
		{
			push_b(tabtab, pc);
			i++;
		}
		rotate_a(tabtab, pc);
	}
}
