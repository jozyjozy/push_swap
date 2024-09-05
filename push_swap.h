/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:07:02 by jlarue            #+#    #+#             */
/*   Updated: 2023/01/03 14:28:45 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <assert.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_count
{
	int	nb_pile_a;
	int	nb_pile_b ;
}	t_count;

typedef struct s_list
{
	int	value;
	int	rank;
}	t_list;

int		algo_rank_incrementation(t_list **tabtab, int rank);
void	move_a(t_list **tt, t_count *pc);
void	move_b(t_list **tt, t_count *pc);
void	move_c(t_list **tt, t_count *pc);
void	move_d(t_list **tt, t_count *pc);
int		check_tabtab(t_list *tabtab, t_count *pc);
void	choix_mov(t_list **tabtab, t_count *pc, int rank);
void	ft_pretri(t_list **tabtab, t_count *pc);
void	tri_tabtab_b(t_list **tabtab, t_count *pc, int rank);
void	putin_column2_complex(t_list **tabtab, t_count *pc);
void	ft_algo_complex(t_list **tabtab, t_count *pc);
void	putin_column2_4_5(t_list **tabtab, t_count *pc);
void	ft_algo4_5(t_list **tabtab, t_count *pc);
void	ft_algo2(t_list *tabtab, t_count *pc);
void	ft_algo3(t_list *tabtab, t_count *pc);
void	create_pile(t_count *pc, int argc);
void	ft_algo(t_list **tabtab, t_count *pc);
void	struc_reboot(t_list **tabtab, t_count *pc);
void	delfirst(t_list *tab, int index);
void	push_a(t_list **tabtab, t_count *pile_counter);
void	push_b(t_list **tabtab, t_count *pile_counter);
void	swap_a(t_list **tabtab, t_count *pile_counter);
void	swap_b(t_list **tabtab, t_count *pile_counter);
void	swap_ss(t_list **tabtab, t_count *pile_counter);
void	rotate_a(t_list **tabtab, t_count *pile_counter);
void	rotate_b(t_list **tabtab, t_count *pile_counter);
void	rotate_rr(t_list **tabtab, t_count *pile_counter);
void	reverse_rotate_a(t_list **tabtab, t_count *pile_counter);
void	reverse_rotate_b(t_list **tabtab, t_count *pile_counter);
void	reverse_rotate_a(t_list **tabtab, t_count *pile_counter);
int		check_list(char *lst);
int		check_doubloons(t_list *str, int argc);
long	ft_atol(char *nptr, int checker);
int		fill_tabtab(t_list **tabtab, char **argv, int checker, int argc);
int		main(int argc, char **argv);
void	fill_rank(t_list **tabtab, int argc);

#endif
