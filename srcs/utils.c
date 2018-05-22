/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:06:28 by galemair          #+#    #+#             */
/*   Updated: 2018/05/22 15:17:01 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include <limits.h>

int		get_list_size(t_stack *list)
{
	int count;

	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
