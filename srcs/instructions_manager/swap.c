/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:09:08 by galemair          #+#    #+#             */
/*   Updated: 2018/05/17 21:59:07 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sb(t_stack **list_a, t_stack **list_b)
{
	t_stack *tmp;

	if (!(*list_b) || !((*list_b)->next))
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = (*list_b)->next;
	(*list_b)->next = tmp;
}

void	sa(t_stack **list_a, t_stack **list_b)
{
	t_stack *tmp;

	if (!(*list_a) || !((*list_a)->next))
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = (*list_a)->next;
	(*list_a)->next = tmp;
}
void	ss(t_stack **list_a, t_stack **list_b)
{
	sa(list_a, list_b);
	sb(list_a, list_b);
}
