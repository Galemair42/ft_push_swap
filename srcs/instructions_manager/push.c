/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:07:55 by galemair          #+#    #+#             */
/*   Updated: 2018/05/20 17:31:38 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void		pa(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_b == NULL)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = *list_a;
	*list_a = tmp;
}
void		pb(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;

	if (*list_a == NULL)
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = *list_b;
	*list_b = tmp;
}
