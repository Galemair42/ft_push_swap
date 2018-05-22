/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 19:04:18 by galemair          #+#    #+#             */
/*   Updated: 2018/05/22 15:00:46 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

void	print_list(t_stack *list)
{
	while (list)
	{
		ft_printf("number = %d\n", list->nb);
		ft_printf("index = %d\n", list->index);
		ft_printf("------------\n\n");
		list = list->next;
	}
}
