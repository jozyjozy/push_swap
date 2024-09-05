/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:06:20 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 14:21:39 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	move_a(t_list **tt, t_count *pc)
{
	swap_b(tt, pc);
	rotate_b(tt, pc);
	swap_b(tt, pc);
	reverse_rotate_b(tt, pc);
	swap_b(tt, pc);
}

void	move_b(t_list **tt, t_count *pc)
{
	swap_b(tt, pc);
	rotate_b(tt, pc);
	swap_b(tt, pc);
	reverse_rotate_b(tt, pc);
}

void	move_c(t_list **tt, t_count *pc)
{
	rotate_b(tt, pc);
	swap_b(tt, pc);
	reverse_rotate_b(tt, pc);
	swap_b(tt, pc);
}

void	move_d(t_list **tt, t_count *pc)
{
	rotate_b(tt, pc);
	swap_b(tt, pc);
	reverse_rotate_b(tt, pc);
}
