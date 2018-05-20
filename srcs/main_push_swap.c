/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 14:53:52 by galemair          #+#    #+#             */
/*   Updated: 2018/05/20 17:33:49 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (argc > 1)
	{
		if (create_list(count - 1, numbers + 1, numbers + 1, &list_a) == 0)
			return (error(list_a, list_b) + 0);
		push_swap(list_a, list_b);
	}
	return (0);
}
