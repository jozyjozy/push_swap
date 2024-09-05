/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:14:57 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/06 15:28:54 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list			**tt;
	static int		checker;
	t_count			*pile_counter;

	pile_counter = malloc(sizeof(t_count));
	create_pile(pile_counter, argc);
	checker = 0;
	if (argc == 1)
		return (free(pile_counter), 1);
	tt = malloc(sizeof(t_list *) * 2);
	tt[0] = malloc(sizeof(t_list) * (argc));
	tt[1] = malloc(sizeof(t_list) * (argc));
	if (!tt || !tt[0] || !tt[1])
		return (free(tt), 0);
	checker = fill_tabtab(tt, argv, checker, argc - 1);
	if (checker > 0)
	{
		write(1, "Error\n", 6);
		return (free(tt[0]), free(tt[1]), free(tt), free(pile_counter), 1);
	}
	ft_algo(tt, pile_counter);
	return (free(tt[0]), free(tt[1]), free(tt), free(pile_counter), 1);
}
