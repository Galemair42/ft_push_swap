/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:26:32 by galemair          #+#    #+#             */
/*   Updated: 2018/05/26 01:39:37 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "push_swap.h"

void	print_list(t_stack *list)
{
	while (list)
	{
		printf("%d, ", list->nb);
		list = list->next;
	}
}

void	print_quick(t_quick *list)
{
	while (list)
	{
		printf("nbr :%d\n", list->numbers);
		list = list->next;
	}
}

t_quick *divide_median(t_stack **list_a, t_stack **list_b)
{
	int median;
	t_quick *quick;

	quick = ft_memalloc(sizeof(t_quick));
	while (get_list_size(*list_a) > 3)
	{
		median = (get_list_size(*list_a) / 2) + find_smallest(*list_a, -1);
		while (check_inferior_value_stack(*list_a, median) > 0)
		{
			if ((*list_a)->index >= median)
				ra(list_a, list_b, DISPLAY);//opti possible pour RRR :)
			else
			{
				pb(list_a, list_b, DISPLAY);
				quick->numbers++;
			}
			if (check_inferior_value_stack(*list_a, median) == 0)
				push_front(&quick);
		}
	}
	return (quick);
	//TRIER EN UN COUP LES 3
//	print_quick(*list_a);
//	printf("\n--\n");
//	print_quick(*list_b);
//	exit (0);
//	median = (get_list_size(*list_a) / 2) + find_smallest(*list_a);
//	while (check_inferior_value_stack(*list_a, median))
//	{
//		if ((*list_a)->index > median)
//			ra(list_a, list_b, DISPLAY);//opti possible pour RRR :)
//		else
//			pb(list_a, list_b, DISPLAY);
//	}	
}


void	quick_sort_to_a(t_stack **list_a, t_stack **list_b, t_quick *quick)
{
	int median;
	int numbers;
	int right;
	int last_sorted;

	last_sorted = (*list_a)->index;
	quick = quick->next;
	while (quick)
	{
		right = 0;
		numbers = quick->numbers;
	//	printf("NUMBERS = quick->numbers = %d\n", quick->numbers);
	//	printf("MEDIAN = %d\n", median);
		while (numbers > 12)
		{
			median = (numbers / 2) + find_smallest(*list_b, numbers);
			while (check_superior_value_chandelle(*list_b, median, numbers - right))
			{
				if ((*list_b)->index >= median)
				{
					pa(list_a, list_b, DISPLAY);
					numbers--;
				}
				else
				{
					rb(list_a, list_b, DISPLAY);
					right++;
				}
			}
			while (right > 0)
			{
				rrb(list_a, list_b, DISPLAY);
				right--;
			}
		}
		while (numbers > 0)
		{
			pa(list_a, list_b, DISPLAY);
			numbers--;
		}
		quick = quick->next;
	}
//	while (get_list_size(*list_b) > 3)
//	{
//		median = (get_list_size(*list_b) / 2) + find_smallest(*list_b, -1);
//		//printf("MEDIAN HERE = %d\n", median);
//		while (check_superior_value_stack(*list_b, median))
//		{
//			if ((*list_b)->index <= median)
//				rb(list_a, list_b, DISPLAY);
//			else
//				pa(list_a, list_b, DISPLAY);
//		}
//	}
//	while (get_list_size(*list_b) > 0)
//		pa(list_a, list_b, DISPLAY);;
}

void	sort_b(t_stack **list_a, t_stack **list_b, int to_seek)
{
	if (get_list_size(*list_b) / 2 >= (check_value_in_stack(to_seek, *list_b) + 1))
		while ((*list_b)->index != to_seek)
			rb(list_a, list_b, DISPLAY);
	else
		while ((*list_b)->index != to_seek)
			rrb(list_a, list_b, DISPLAY);
	pa(list_a, list_b, DISPLAY);
}
void	sort_list(t_stack **list_a, t_stack **list_b)
{
	int last_sorted = -1;
	int flag_sa = 0;

	while (list_is_sorted(*list_a, *list_b) == 0)
	{
		if ((*list_a)->index == last_sorted + 1 && flag_sa == 1)
		{
			last_sorted += 2;
			rra(list_a, list_b, DISPLAY);
			sa(list_a, list_b, DISPLAY);
			ra(list_a, list_b, DISPLAY);
			ra(list_a, list_b, DISPLAY);
			flag_sa = 0;
		}
		else if ((*list_a)->index == last_sorted + 1)
		{
			last_sorted++;
			(*list_a)->sorted = 1;
			ra(list_a, list_b, DISPLAY);
		}
		else if ((*list_a)->index == last_sorted + 2)
		{
			ra(list_a, list_b, DISPLAY);
			flag_sa = 1;
		}
		else if (check_value_in_stack(last_sorted + 1, *list_a))
			pb(list_a, list_b, DISPLAY);
		else
			sort_b(list_a, list_b, last_sorted + 1);
	}
}
void	push_swap(t_stack *list_a, t_stack *list_b)
{
	t_quick *quick;

	pre_sort(list_a);
	quick = divide_median(&list_a, &list_b);
	quick_sort_to_a(&list_a, &list_b, quick);
	sort_list(&list_a, &list_b);
	//print_quick(quick);
//	printf("LIST_A : \n\n");
	//print_list(list_a);
//	printf("\n\nLIST_B : \n\n");
//	print_list(list_b);
}
//faire des transfusions avec mediane a chaque fois jusqu a 3
//first algo : 
//second algo :
