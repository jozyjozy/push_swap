/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:54 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:21:51 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_rr(t_list **tabtab, t_count *pile_counter)
{
	reverse_rotate_b(tabtab, pile_counter);
	reverse_rotate_a(tabtab, pile_counter);
}
