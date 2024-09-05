/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:51 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/28 12:09:57 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **tabtab, t_count *pc)
{
	int		i;
	t_list	tmp;

	tmp = tabtab[0][0];
	i = 0;
	while (i < (pc->nb_pile_a - 1))
	{
		tabtab[0][i] = tabtab[0][i + 1];
		i++;
	}
	tabtab[0][i] = tmp;
	write(1, "ra\n", 3);
}
