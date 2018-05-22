/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:08:13 by galemair          #+#    #+#             */
/*   Updated: 2018/05/21 16:10:02 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int		get_list_size(t_stack *list_a)
{
	int count;

	count = 0;
	while (list_a)
	{
		list_a = list_a->next;
		count++;
	}
	return (count);
}
