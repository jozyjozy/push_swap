/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:49:46 by jlarue            #+#    #+#             */
/*   Updated: 2022/12/27 15:22:00 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rr(t_list **tabtab, t_count *pile_counter)
{
	rotate_b(tabtab, pile_counter);
	rotate_a(tabtab, pile_counter);
}
