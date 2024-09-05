/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:48:48 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 14:29:16 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_tabtab(t_list *tabtab, t_count *pc)
{
	int	i;

	i = 1;
	while (i != pc->nb_pile_a)
	{
		if (tabtab[i - 1].rank != i)
			return (0);
		i++;
	}
	return (1);
}

void	delfirst(t_list *tab, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i].value = 0;
	tab[i].rank = 0;
}

void	struc_reboot(t_list **tabtab, t_count *pc)
{
	while (pc->nb_pile_b != 0)
	{
		if (tabtab[1][0].value < tabtab[1][1].value && pc->nb_pile_b > 1)
			swap_b(tabtab, pc);
		push_a(tabtab, pc);
		if (tabtab[0][0].value > tabtab[0][1].value
		&& tabtab[0][0].value < tabtab[0][2].value && pc->nb_pile_a > 1)
			swap_a(tabtab, pc);
		if (tabtab[0][0].value > tabtab[0][pc->nb_pile_a - 1].value
			&& pc->nb_pile_a > 1)
			rotate_a(tabtab, pc);
	}
}

void	create_pile(t_count *pc, int argc)
{
	pc->nb_pile_a = argc - 1;
	pc->nb_pile_b = 0;
	return ;
}

int	algo_rank_incrementation(t_list **tabtab, int rank)
{
	if (tabtab[1][0].rank == rank + 2
	&& tabtab[1][1].rank == rank + 1 && tabtab[1][2].rank == rank)
		rank = rank + 3;
	if (tabtab[1][0].rank == rank + 1 && tabtab[1][1].rank == rank)
		rank = rank + 2;
	if (tabtab[1][0].rank == rank)
		rank++;
	return (rank);
}
