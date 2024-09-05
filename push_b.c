/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:50:04 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 14:18:32 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **t, t_count *pc)
{
	int	i;

	i = 0;
	if (pc->nb_pile_a <= 0)
		return ;
	else
	{
		while (pc->nb_pile_b - i >= 0)
		{
			t[1][pc->nb_pile_b + 1 - i] = t[1][pc->nb_pile_b - i];
			i++;
		}
		t[1][0] = t[0][0];
		delfirst(t[0], pc->nb_pile_a - 1);
		pc->nb_pile_b = pc->nb_pile_b + 1;
		pc->nb_pile_a = pc->nb_pile_a - 1;
	}
	write(1, "pb\n", 3);
}
