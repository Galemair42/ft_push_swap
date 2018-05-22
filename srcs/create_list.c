/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 14:48:00 by galemair          #+#    #+#             */
/*   Updated: 2018/05/22 14:29:01 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int		create_list(int count, char **numbers, t_stack **list_a)
{
	t_stack *tmp;

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
	return (1);
}
