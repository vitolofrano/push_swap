/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:37:01 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 11:41:28 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	freeandexit(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	free(size_a);
	free(size_b);
	free(pila_a);
	free(pila_b);
	exit(0);
}

void	init(int argc, int *size_a, int *size_b)
{
	size_a[0] = argc - 1;
	size_a[1] = size_a[0];
	size_b[0] = 0;
}

void	pushswap(long *pila_a, int *size_a, long *pila_b, int *size_b)
{
	if (!checkduplicati(pila_a, size_a) && !checkorder(pila_a, size_a))
	{
		if (size_a[0] <= 3)
			sort_tre_numeri(pila_a, size_a);
		else if (size_a[0] <= 5)
			sort_tiny(pila_a, size_a, pila_b, size_b);
		else
			sort(pila_a, size_a, pila_b, size_b);
	}
	else
		write(2, "Error \n", 8);
}

int	main(int argc, char **argv)
{
	long	*pila_a;
	long	*pila_b;
	int		i;
	int		*size_a;
	int		*size_b;

	pila_a = (long *)malloc((argc - 1) * sizeof(long));
	size_a = (int *)malloc(2 * sizeof(int));
	pila_b = (long *)malloc((argc - 1) * sizeof(long));
	size_b = (int *)malloc(2 * sizeof(int));
	init(argc, size_a, size_b);
	i = 1;
	while (i < argc)
	{
		if (checkn(argv[i]))
			freeandexit(pila_a, size_a, pila_b, size_b);
		pila_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	pushswap(pila_a, size_a, pila_b, size_b);
	freeandexit(pila_a, size_a, pila_b, size_b);
}
