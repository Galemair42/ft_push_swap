/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 14:48:00 by galemair          #+#    #+#             */
/*   Updated: 2018/05/26 02:41:39 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void	push_front(t_quick **begin_list)
{
	t_quick *tmp;
	
	tmp = ft_memalloc(sizeof(t_quick));
	tmp->next = *begin_list;
	*begin_list = tmp;
}
int		create_list(int count, char **numbers, t_stack **list_a)
{
	t_stack *tmp;

	//if (count == 0)
	*list_a = malloc(sizeof(t_stack));
	(*list_a)->nb = ft_atoi(*numbers);
	(*list_a)->index = -1;
	(*list_a)->next = NULL;
	numbers++;
	tmp = *list_a;
	while (count > 0)
	{
		tmp->next = malloc(sizeof(t_stack));
		(tmp->next)->nb = ft_atoi(*numbers);
		(tmp->next)->index = -1;
		tmp = tmp->next;
		numbers++;
		count--;
	}
	tmp->next = NULL;
	print_list(tmp);
	exit (0);
	return (1);
}
