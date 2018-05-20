/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:30:38 by galemair          #+#    #+#             */
/*   Updated: 2018/05/20 17:30:45 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_H
# define GLOBAL_H

typedef	struct s_stack	t_stack;

struct			s_stack
{
	int			nb;
	t_stack		*next;
};

void			ft_printf(const char *str, ...);
void			sa(t_stack **list_a, t_stack **list_b);
void			sb(t_stack **list_a, t_stack **list_b);
void			ss(t_stack **list_a, t_stack **list_b);
void			pa(t_stack **list_a, t_stack **list_b);
void			pb(t_stack **list_a, t_stack **list_b);
void			ra(t_stack **list_a, t_stack **list_b);
void			rb(t_stack **list_a, t_stack **list_b);
void			rr(t_stack **list_a, t_stack **list_b);
void			rra(t_stack **list_a, t_stack **list_b);
void			rrb(t_stack **list_a, t_stack **list_b);
void			rrr(t_stack **list_a, t_stack **list_b);
void			error(t_stack **list_a, t_stack **list_b);
/*
 **-------------DEBUG.C--------------
 */
void			print_list(t_stack *list);
/*
 **-------------CREATE_LIST.C--------
 */
int				create_list(int count, char **numbers, t_stack **list_a);

#endif
