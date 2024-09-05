/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_column_complex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:45:20 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 15:53:52 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	choix_mov(t_list **tabtab, t_count *pc, int rank)
{
	int	current;
	int	rank1;
	int	rank2;

	current = 0;
	rank1 = rank;
	rank2 = rank;
	if (rank + 2 < pc->nb_pile_a + pc->nb_pile_b)
	{
		rank1 = rank + 2;
		rank2 = rank + 1;
	}
	if (tabtab[0][current].rank == rank)
		return ;
	while (tabtab[0][current].rank != rank
	&& tabtab[0][current].rank != rank1 && tabtab[0][current].rank != rank2)
		current++;
	if (pc->nb_pile_a / 2 > current)
		while (tabtab[0][0].rank != rank
		&& tabtab[0][0].rank != rank1 && tabtab[0][0].rank != rank2)
			rotate_a(tabtab, pc);
	else
		while (tabtab[0][0].rank != rank
		&& tabtab[0][0].rank != rank1 && tabtab[0][0].rank != rank2)
			reverse_rotate_a(tabtab, pc);
}

void	ft_tri3_tabtab_b(t_list **tt, t_count *pc)
{
	if (tt[1][0].rank < tt[1][1].rank
	&& tt[1][1].rank < tt[1][2].rank
	&& tt[1][0].rank < tt[1][2].rank)
		move_a(tt, pc);
	if (tt[1][0].rank < tt[1][1].rank
	&& tt[1][1].rank > tt[1][2].rank
	&& tt[1][0].rank < tt[1][2].rank)
		move_b(tt, pc);
	if (tt[1][0].rank > tt[1][1].rank
	&& tt[1][1].rank < tt[1][2].rank
	&& tt[1][0].rank < tt[1][2].rank)
		move_c(tt, pc);
	if (tt[1][0].rank < tt[1][1].rank
	&& tt[1][1].rank > tt[1][2].rank
	&& tt[1][0].rank > tt[1][2].rank)
		swap_b(tt, pc);
	if (tt[1][0].rank > tt[1][1].rank
	&& tt[1][1].rank < tt[1][2].rank
	&& tt[1][0].rank > tt[1][2].rank)
		move_d(tt, pc);
}

void	tri_tabtab_b(t_list **tabtab, t_count *pc, int rank)
{
	if (tabtab[1][0].rank == rank + 2
		|| tabtab[1][1].rank == rank + 2 || tabtab[1][2].rank == rank + 2)
		return (ft_tri3_tabtab_b(tabtab, pc));
	if (tabtab[1][0].rank == rank && tabtab[1][1].rank == rank + 1)
		swap_b(tabtab, pc);
}

void	ft_pretri(t_list **tabtab, t_count *pc)
{
	int		med;
	int		tmp;

	if (pc->nb_pile_a > 250)
		tmp = pc->nb_pile_a / 12;
	else
		tmp = pc->nb_pile_a / 4;
	med = 0;
	while (pc->nb_pile_a > tmp)
	{
		med = med + tmp;
		while (pc->nb_pile_b != med && pc->nb_pile_a != 0)
		{
			if (tabtab[0][0].rank <= med)
				push_b(tabtab, pc);
			else
				rotate_a(tabtab, pc);
		}
	}
	while (pc->nb_pile_b != 0)
		push_a(tabtab, pc);
}
