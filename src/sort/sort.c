/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:36:00 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 10:24:23 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sposta_in_cima(long *pila, int *size, int index, char n)
{
	int	i;

	if (index == 0)
		return ;
	if (index > size[0] / 2)
	{
		i = size[0] - index;
		while (i > 0)
		{
			if (n == 'A')
				rra(pila, size[0]);
			else
				rrb(pila, size[0]);
			i--;
		}
	}
	else
	{
		i = index;
		while (i > 0)
		{
			if (n == 'A')
				ra(pila, size[0]);
			else
				rb(pila, size[0]);
			i--;
		}
	}
}

void	sposta_in_coda(long *pila, int *size, int index, char n)
{
	int	i;

	if (index > size[0] / 2)
	{
		i = size[0] - index - 1;
		while (i-- > 0)
		{
			if (n == 'A')
				rra(pila, size[0]);
			else
				rrb(pila, size[0]);
		}
	}
	else
	{
		i = index + 1;
		while (i-- > 0)
		{
			if (n == 'A')
				ra(pila, size[0]);
			else
				rb(pila, size[0]);
		}
	}
}

int	utilmoveb(long *pila_a, long *pila_b, int *size_b)
{
	int	val;
	int	pos;
	int	i;

	i = -1;
	val = 1232323;
	while (i++ < size_b[0])
	{
		if (val > pila_a[0] - pila_b[i] && pila_a[0] > pila_b[i])
		{
			val = pila_a[0] - pila_b[i];
			pos = i;
		}
	}
	return (pos);
}

void	movepilab(long *pila_a, long *pila_b, int *size_b)
{
	int	max;
	int	_min;
	int	pos;

	max = maxim(pila_b, size_b);
	_min = min(pila_b, size_b);
	if (pila_a[0] > pila_b[max])
		sposta_in_cima(pila_b, size_b, max, 'B');
	else if (pila_a[0] < pila_b[_min])
		sposta_in_coda(pila_b, size_b, _min, 'B');
	else
	{
		pos = utilmoveb(pila_a, pila_b, size_b);
		sposta_in_cima(pila_b, size_b, pos, 'B');
	}
}

void	sort(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	int	i;

	i = 0;
	pb(pila_a, size_a, pila_b, size_b);
	pb(pila_a, size_a, pila_b, size_b);
	while (i < size_a[0])
	{
		sposta_in_cima(pila_a, size_a, meno_costoso(pila_a, size_a, pila_b,
				size_b), 'A');
		movepilab(pila_a, pila_b, size_b);
		pb(pila_a, size_a, pila_b, size_b);
	}
	sposta_in_cima(pila_b, size_b, maxim(pila_b, size_b), 'B');
	while (size_b[0] != 0)
	{
		pa(pila_a, size_a, pila_b, size_b);
	}
}
