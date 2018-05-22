/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:26:32 by galemair          #+#    #+#             */
/*   Updated: 2018/05/22 15:37:24 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "push_swap.h"

void	push_swap(t_stack *list_a, t_stack *list_b)
{
	int	median;

	printf("median = %d\n", median = get_list_size(list_a) / 2);
	pre_sort(list_a);
	while (check_inferior_value_stack(list_a, median))
	{
		if (list_a->index > median)
			ra(&list_a, &list_b, 1);
		else
			pb(&list_a, &list_b, 1);
	}
	print_list(list_a);
	ft_printf("LOURD\n\n");
	print_list(list_b);
}
