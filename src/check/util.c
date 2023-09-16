/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitol <vitol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:42:00 by vitol             #+#    #+#             */
/*   Updated: 2023/05/30 11:51:03 by vitol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\r' || a == '\f' || a == '\v'
		|| a == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] != '\0' && s[i] >= 48 && s[i] <= 57 && ft_isspace(s[i]) == 0)
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res * sign);
}

int	checkn(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!ft_isspace(s[i]) && (s[i] < 48 || s[i] > 57) && s[i] != '-'
			&& s[i] != '+')
		{
			write(2, "Error\n", 8);
			return (1);
		}
		i++;
	}
	return (0);
}
