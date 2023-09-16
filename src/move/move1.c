/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:34:40 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 11:12:55 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sab(long *a, int size)
{
	int	temp;

	if (size < 1)
	{
		return ;
	}
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

void	rrab(long *a, int size)
{
	int	temp;
	int	i;

	if (size < 1)
	{
		return ;
	}
	i = size;
	temp = a[size - 1];
	while (i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = temp;
}

void	rab(long *a, int size)
{
	int	temp;
	int	i;

	if (size < 1)
	{
		return ;
	}
	i = 0;
	temp = a[0];
	while (i < size)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[size - 1] = temp;
}

void	pb(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	int	i;

	if (size_a[0] == 0)
	{
		return ;
	}
	i = size_b[0]++;
	while (i > 0)
	{
		pila_b[i] = pila_b[i - 1];
		i--;
	}
	pila_b[0] = pila_a[0];
	size_a[0]--;
	rab(pila_a, size_a[0] + 1);
	write(1, "pb\n", 3);
}

void	pa(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	int	i;

	if (size_b[0] == 0)
	{
		return ;
	}
	i = size_a[0]++;
	while (i > 0)
	{
		pila_a[i] = pila_a[i - 1];
		i--;
	}
	pila_a[0] = pila_b[0];
	size_b[0]--;
	rab(pila_b, size_b[0] + 1);
	write(1, "pa\n", 3);
}
