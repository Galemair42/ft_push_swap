/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:01:59 by galemair          #+#    #+#             */
/*   Updated: 2018/05/22 16:36:43 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "global.h"

int		check_inferior_value_stack(t_stack *list, int median)
{
	while (list)
	{
		if (list->index < median)
			return (1);
		list = list->next;
	}
	return (0);
}
