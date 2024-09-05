/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tabtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:48:59 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/06 11:27:38 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_tabtab(t_list **tabtab, char **argv, int checker, int argc)
{
	int				i;
	long long		nb;

	i = 0;
	while (argv[i + 1])
	{
		checker += check_list(argv[i + 1]);
		nb = ft_atol(argv[i + 1], checker);
		if (nb > 2147483647 || -2147483648 > nb)
		{
			checker++;
			return (checker);
		}
		tabtab[0][i].value = nb;
		tabtab[1][i].value = 0;
		tabtab[0][i].rank = 0;
		tabtab[1][i].rank = 0;
		i++;
	}
	fill_rank(tabtab, argc);
	checker += check_doubloons(tabtab[0], argc);
	return (checker);
}
