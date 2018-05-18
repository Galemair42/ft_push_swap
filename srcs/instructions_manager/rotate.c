/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:18:03 by galemair          #+#    #+#             */
/*   Updated: 2018/05/18 12:00:06 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		ra(t_stack **list_a, t_stack **list_b)
{
	t_stack *tmp;
	
	if (!((*list_a)->next) || !((*list_a)->next))
		return ;
	tmp = *list_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *list_a;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = NULL;
}

void		rb(t_stack **list_a, t_stack **list_b)
{
	t_stack *tmp;

	if (!((*list_b)->next) || !((*list_b)->next))
		return ;
	tmp = *list_b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *list_b;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = NULL;
}

void		rr(t_stack **list_a, t_stack **list_b)
{
	ra(list_a, list_b);
	rb(list_a, list_b);
}
