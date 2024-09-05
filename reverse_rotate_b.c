/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:57 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 14:19:19 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_list **tabtab, t_count *pc)
{
	int		i;
	int		j;
	t_list	tmp;

	tmp = tabtab[1][pc->nb_pile_b - 1];
	j = 0;
	i = pc->nb_pile_b - 1;
	while (i > j)
	{
		tabtab[1][i - j] = tabtab[1][i - j - 1];
		i--;
	}
	tabtab[1][0] = tmp;
	write(1, "rrb\n", 4);
}
