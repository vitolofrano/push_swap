/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:52 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 11:40:37 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <errno.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	sab(long *a, int size);
void	rab(long *a, int size);
void	sb(long *a, int size);
void	rb(long *a, int size);
void	sb(long *a, int size);
void	ra(long *a, int size);
void	sa(long *a, int size);
void	rra(long *a, int size);
void	rrb(long *a, int size);
void	rrab(long *a, int size);
void	pb(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	pa(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	rr(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	rrr(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	ss(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	sort(long *pila_a, int *size_a, long *pila_b, int *size_b);
void	sort_tre_numeri(long *pila_a, int *size_a);
int		maxim(long *pila, int *size);
int		min(long *pila, int *size);
int		checkorder(long *pila_a, int *size_a);
int		checkn(char *s);
int		checkduplicati(long *pila_a, int *size_a);
int		meno_costoso(long *pila_a, int *size_a, long *pila_b, int *size_b);
int		ft_atoi(const char *s);
void	sposta_in_cima(long *pila, int *size, int index, char n);
void	sposta_in_coda(long *pila, int *size, int index, char n);
void	sort_tiny(long *pila_a, int *size_a, long *pila_b, int *size_b);
int		checkmaxmin(long *pila_a, int *size_a);

#endif