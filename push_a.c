/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:50:07 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:35:44 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **t, t_count *pc)
{
	int	i;

	i = 0;
	if (pc->nb_pile_b <= 0)
		return ;
	else
	{
		while (pc->nb_pile_a - i >= 0)
		{
			t[0][pc->nb_pile_a + 1 - i] = t[0][pc->nb_pile_a - i];
			i++;
		}
		t[0][0] = t[1][0];
		delfirst(t[1], pc->nb_pile_b - 1);
		pc->nb_pile_a = pc->nb_pile_a + 1;
		pc->nb_pile_b = pc->nb_pile_b - 1;
	}
	write(1, "pa\n", 3);
}
