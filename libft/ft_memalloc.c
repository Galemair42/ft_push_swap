/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:15:04 by galemair          #+#    #+#             */
/*   Updated: 2018/04/04 18:14:25 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	if ((alloc = malloc(size)) == NULL)
		return (NULL);
	if (alloc == NULL)
		return (NULL);
	return (ft_memset(alloc, 0, size));
}
