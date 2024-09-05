/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:40 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:38:33 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **tabtab, t_count *pile_counter)
{
	t_list	tmp;

	if (pile_counter->nb_pile_a >= 2)
	{
		tmp = tabtab[0][0];
		tabtab[0][0] = tabtab[0][1];
		tabtab[0][1] = tmp;
	}
	write(1, "sa\n", 3);
	return ;
}
