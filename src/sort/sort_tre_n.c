/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tre_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:42:16 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 10:57:12 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_tre_numeri(long *pila_a, int *size_a)
{
	int	max;

	max = maxim(pila_a, size_a);
	if (max == 0)
	{
		ra(pila_a, size_a[0]);
	}
	else if (max == 1)
	{
		rra(pila_a, size_a[0]);
	}
	if (pila_a[0] > pila_a[1])
	{
		sa(pila_a, size_a[0]);
	}
}

void	sort_tiny(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	int	i;
	int	_min;

	i = 0;
	while (i < size_a[1] - 3)
	{
		_min = min(pila_a, size_a);
		sposta_in_cima(pila_a, size_a, _min, 'A');
		pb(pila_a, size_a, pila_b, size_b);
		i++;
	}
	sort_tre_numeri(pila_a, size_a);
	pa(pila_a, size_a, pila_b, size_b);
	pa(pila_a, size_a, pila_b, size_b);
}