/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:50:00 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:39:11 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **tabtab, t_count *pc)
{
	int		i;
	int		j;
	t_list	tmp;

	tmp = tabtab[0][pc->nb_pile_a - 1];
	j = 0;
	i = pc->nb_pile_a - 1;
	while (i > j)
	{
		tabtab[0][i - j] = tabtab[0][i - j - 1];
		i--;
	}
	tabtab[0][0] = tmp;
	write(1, "rra\n", 4);
}
