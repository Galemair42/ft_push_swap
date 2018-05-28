/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 18:42:20 by galemair          #+#    #+#             */
/*   Updated: 2018/05/25 20:53:49 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.h"
#include "checker.h"
#include "libft.h"

static t_tab *init_table(void)
{
	static t_tab g_tab[12];

	g_tab[0].str = "sa";
	g_tab[0].f = &sa;
	g_tab[1].str = "sb";
	g_tab[1].f = &sb;
	g_tab[2].str = "ss";
	g_tab[2].f = &ss;
	g_tab[3].str = "pa";
	g_tab[3].f = &pa;
	g_tab[4].str = "pb";
	g_tab[4].f = &pb;
	g_tab[5].str = "ra";
	g_tab[5].f = &ra;
	g_tab[6].str = "rb";
	g_tab[6].f = &rb;
	g_tab[7].str = "rr";
	g_tab[7].f = &rr;
	g_tab[8].str = "rra";
	g_tab[8].f = &rra;
	g_tab[9].str = "rrb";
	g_tab[9].f = &rrb;
	g_tab[10].str = "rrr";
	g_tab[10].f = &rrr;
	g_tab[11].str = "end";
	g_tab[11].f = &error;
	return (g_tab);
}


void	display_check(t_stack *list_a, t_stack *list_b)
{
	while (list_a->next)
	{
		if ((list_a->next)->nb < list_a->nb)
		{
			ft_printf("KO\n");
			return ;
		}
		list_a = list_a->next;
	}
	if (list_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
void	checker(t_stack *list_a, t_stack *list_b)
{
	char		*instruction;
	t_tab		*table;
	int			i;
	
	//print_list(list_a);
	table = init_table();
	while (get_next_line(0, &instruction))
	{
		i = 0;
		while (ft_strcmp(instruction, table[i].str) != 0 && ft_strcmp("end", table[i].str) != 0)
			i++;
		table[i].f(&list_a, &list_b, 0);
		if (i == 11)
			return ;
	}
	display_check(list_a, list_b);
}
