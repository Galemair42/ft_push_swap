/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:26:32 by galemair          #+#    #+#             */
/*   Updated: 2018/05/24 20:56:51 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "push_swap.h"

void	divide_median(t_stack **list_a, t_stack **list_b)
{
	int median;

	median = (get_list_size(*list_a) / 2) + find_smallest(*list_a);
	while (check_inferior_value_stack(*list_a, median))
	{
		if ((*list_a)->index > median)
			ra(list_a, list_b, 1);//opti possible pour RRR :)
		else
			pb(list_a, list_b, 1);
	}
}

void	quick_sort_to_a(t_stack **list_a, t_stack **list_b)
{
	int median;

	while (get_list_size(*list_b) > 2)
	{
		median = (get_list_size(*list_b) / 2) + find_smallest(*list_b);
		while (check_superior_value_stack(*list_b, median))
		{
			if ((*list_b)->index < median)
				rb(list_a, list_b, 1);//opti possible pour RRR :)
			else
				pa(list_a, list_b, 1);
		}
	}
	while (get_list_size(*list_b) > 0)
		pa(list_a, list_b, 1);
}
void	push_swap(t_stack *list_a, t_stack *list_b)
{
	pre_sort(list_a);
	divide_median(&list_a, &list_b);
	quick_sort_to_a(&list_a, &list_b);
	printf("LIST_A : \n\n");
	print_list(list_a);
//	printf("\n\nLIST_B : \n\n");
//	print_list(list_b);
}
//faire des transfusions avec mediane a chaque fois jusqu a 3
//CHECKER AVEC DES SA  EN PERMANENCE
//first algo : 
//second algo :
