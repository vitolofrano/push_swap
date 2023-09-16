/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:40:09 by vitol             #+#    #+#             */
/*   Updated: 2023/05/29 17:39:09 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	mosseperlacima(int *size, int index)
{
	if (index > size[0] / 2)
		return (size[0] - index);
	else
		return (index);
}

int	mosseperlacoda(int *size, int index)
{
	if (index < size[0] / 2)
		return (mosseperlacima(size, index) + 1);
	else
		return (mosseperlacima(size, index) - 1);
}

int	posizionecorretta(long *pila_a, long *pila_b, int *size_b, int index)
{
	int	i;
	int	pos;
	int	val;

	pos = 0;
	val = 23312121;
	i = 0;
	while (i < size_b[0])
	{
		if (pila_a[index] - pila_b[i] < val && pila_a[index] > pila_b[i])
		{
			val = pila_a[index] - pila_b[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	contamosse(long *pila_a, long *pila_b, int *size_b, int index)
{
	int	mosse;
	int	max;
	int	_min;

	max = maxim(pila_b, size_b);
	_min = min(pila_b, size_b);
	mosse = 0;
	if (pila_a[index] > pila_b[max] && max != 0)
	{
		mosse += mosseperlacima(size_b, max);
	}
	else if (pila_a[index] < pila_b[_min] && _min != size_b[0] - 1)
	{
		mosse += mosseperlacoda(size_b, _min);
	}
	else
	{
		mosse += mosseperlacima(size_b, posizionecorretta(pila_a, pila_b,
					size_b, index));
	}
	return (mosse + 1);
}

int	meno_costoso(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	int	i;
	int	pos;
	int	val;
	int	temp;

	i = 0;
	val = 223823828;
	while (i < size_a[0])
	{
		temp = contamosse(pila_a, pila_b, size_b, i)
			+ mosseperlacima(size_a, i);
		if (val > temp)
		{
			val = temp;
			pos = i;
		}
		i++;
	}
	return (pos);
}
