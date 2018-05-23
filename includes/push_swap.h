/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:15:32 by galemair          #+#    #+#             */
/*   Updated: 2018/05/23 17:25:14 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "global.h"

void	push_swap(t_stack *list_a, t_stack *list_b);

/*
**			DEBUG.C
*/
void	print_list(t_stack *list);
/*
**			CHECK_STACK.C
*/
int		check_inferior_value_stack(t_stack *list, int median);
/*
**			PRE_SORT.C
*/
void	pre_sort(t_stack *list);
/*
**			UTILS.C
*/
int		get_list_size(t_stack *list);
int		find_smallest(t_stack *list);
#endif
