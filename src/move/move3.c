/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:49:29 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 11:14:45 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sb(long *a, int size)
{
	sab(a, size);
	write(1, "sb\n", 3);
}

void	rra(long *a, int size)
{
	rrab(a, size);
	write(1, "rra\n", 4);
}

void	rrb(long *a, int size)
{
	rrab(a, size);
	write(1, "rrb\n", 4);
}

void	ra(long *a, int size)
{
	rab(a, size);
	write(1, "ra\n", 3);
}

void	rb(long *a, int size)
{
	rab(a, size);
	write(1, "rb\n", 3);
}
