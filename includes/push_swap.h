/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:15:32 by galemair          #+#    #+#             */
/*   Updated: 2018/09/12 17:42:36 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "global.h"

# define DISPLAY 1
/*
**			PSUH_SWAP.C
*/
void	push_swap(t_stack *list_a, t_stack *list_b);
void	sort_list(t_stack **list_a, t_stack **list_b);
void	sort_b(t_stack **list_a, t_stack **list_b, int to_seek);
void	quick_sort_to_a(t_stack **list_a, t_stack **list_b, t_quick *quick);
t_quick *divide_median(t_stack **list_a, t_stack **list_b);

/*
**			DEBUG.C
*/
void	print_list(t_stack *list);
/*
**			CHECK_STACK.C
*/
int		check_inferior_value_stack(t_stack *list, int median);
int		check_superior_value_stack(t_stack *list, int median);
int		check_value_in_stack(int value, t_stack *list);
int		check_superior_value_chandelle(t_stack *list, int median, int nb);
/*
**			PRE_SORT.C
*/
void	pre_sort(t_stack *list);
/*
**			UTILS.C
*/
int		get_list_size(t_stack *list);
int		find_smallest(t_stack *list, int nb);
/*
**			SORT_HELPER.C
*/
int		last_elem(t_stack *list);
void	sort_3elems(t_stack **list_a, t_stack **list_b);
void	check_ss(t_stack **list_a, t_stack **list_b, char list);
int		list_is_sorted(t_stack *list_a, t_stack *list_b);
int		find_biggest(t_stack *list_a);
/*
**			SMALL_LIST.C
*/
void	put_biggest_to_right(t_stack **list_a, t_stack **list_b);
void	sort_3_elems(t_stack **list_a, t_stack **list_b);
void	manage_small_list(t_stack **list_a, t_stack **list_b);


#endif
