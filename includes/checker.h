/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 17:15:07 by galemair          #+#    #+#             */
/*   Updated: 2018/05/18 14:29:35 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
typedef	struct s_stack	t_stack;

struct			s_stack
{
	int			nb;
	t_stack		*next;
};

typedef struct	s_tab
{
	char		*str;
	void		(*f)(t_stack **list_a, t_stack **list_b);
}				t_tab;

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
 **------------CHECKER.C-------------
 */
void			checker(int count, char **numbers);
/*
 **-------------DEBUG.C--------------
 */
void			print_list(t_stack *list);
/*
 **-------------.C--------------
 */
int				get_next_line_m(const int fd, char **line);
#endif
