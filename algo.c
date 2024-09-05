/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:06:10 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/06 14:38:44 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo(t_list **tabtab, t_count *pc)
{
	if (pc->nb_pile_a == 2 && check_tabtab(tabtab[0], pc) == 0)
	{
		ft_algo2(tabtab[0], pc);
		return ;
	}
	else if (pc->nb_pile_a == 3 && check_tabtab(tabtab[0], pc) == 0)
	{
		ft_algo3(tabtab[0], pc);
		return ;
	}
	else if ((pc->nb_pile_a == 4 || pc->nb_pile_a == 5)
		&& check_tabtab(tabtab[0], pc) == 0)
	{
		ft_algo4_5(tabtab, pc);
		return ;
	}
	else
	{
		if (check_tabtab(tabtab[0], pc) == 0)
			ft_algo_complex(tabtab, pc);
	}
}

void	ft_algo2(t_list *tabtab, t_count *pc)
{
	if (tabtab[0].value > tabtab[1].value)
		swap_a(&tabtab, pc);
}

void	ft_algo3(t_list *tabtab, t_count *pc)
{
	if (tabtab[0].value > tabtab[1].value
		&& tabtab[0].value < tabtab[2].value)
		swap_a(&tabtab, pc);
	if (tabtab[0].value < tabtab[1].value
		&& tabtab[1].value > tabtab[2].value
		&& tabtab[0].value < tabtab[2].value)
	{
		swap_a(&tabtab, pc);
		rotate_a(&tabtab, pc);
	}
	if (tabtab[0].value > tabtab[1].value
		&& tabtab[1].value > tabtab[2].value
		&& tabtab[0].value > tabtab[2].value)
	{
		swap_a(&tabtab, pc);
		reverse_rotate_a(&tabtab, pc);
	}
	if (tabtab[0].value < tabtab[1].value
		&& tabtab[0].value > tabtab[2].value)
		reverse_rotate_a(&tabtab, pc);
	if (tabtab[0].value > tabtab[1].value
		&& tabtab[1].value < tabtab[2].value)
		rotate_a(&tabtab, pc);
}

void	ft_algo4_5(t_list **tabtab, t_count *pc)
{
	putin_column2_4_5(tabtab, pc);
	if (tabtab[1][0].value > tabtab[1][1].value)
		swap_b(tabtab, pc);
	swap_b(tabtab, pc);
	if (tabtab[0][2].rank > 1)
		ft_algo3(tabtab[0], pc);
	else
		ft_algo2(tabtab[0], pc);
	push_a(tabtab, pc);
	push_a(tabtab, pc);
}

void	ft_algo_complex(t_list **tabtab, t_count *pc)
{
	int	rank;
	int	b_pc;

	rank = 1;
	b_pc = pc->nb_pile_a;
	while (check_tabtab(tabtab[0], pc) == 0)
	{
		ft_pretri(tabtab, pc);
		while (pc->nb_pile_b < b_pc)
		{
			choix_mov(tabtab, pc, rank);
			push_b(tabtab, pc);
			tri_tabtab_b(tabtab, pc, rank);
			rank = algo_rank_incrementation(tabtab, rank);
		}
		while (pc->nb_pile_b != 0)
			push_a(tabtab, pc);
	}
}
