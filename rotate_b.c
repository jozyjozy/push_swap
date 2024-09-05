/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:49 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:38:08 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **tabtab, t_count *pc)
{
	int		i;
	t_list	tmp;

	tmp = tabtab[1][0];
	i = 0;
	while (i < (pc->nb_pile_b - 1))
	{
		tabtab[1][i] = tabtab[1][i + 1];
		i++;
	}
	tabtab[1][i] = tmp;
	write(1, "rb\n", 3);
}
