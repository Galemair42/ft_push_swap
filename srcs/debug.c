/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 19:04:18 by galemair          #+#    #+#             */
/*   Updated: 2018/05/18 14:24:15 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_list(t_stack *list)
{
	while (list)
	{
		printf("number = %d\n", list->nb);
		list = list->next;
	}
}
