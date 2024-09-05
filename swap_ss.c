/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:44 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:22:07 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ss(t_list **tabtab, t_count *pile_counter)
{
	swap_a(tabtab, pile_counter);
	swap_b(tabtab, pile_counter);
}
