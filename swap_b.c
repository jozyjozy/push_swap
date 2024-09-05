/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:42 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:38:48 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **tabtab, t_count *pile_counter)
{
	t_list	tmp;

	if (pile_counter->nb_pile_b >= 2)
	{
		tmp = tabtab[1][0];
		tabtab[1][0] = tabtab[1][1];
		tabtab[1][1] = tmp;
	}
	write(1, "sb\n", 3);
	return ;
}
