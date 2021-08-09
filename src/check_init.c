/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:45:21 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/09 15:17:54 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
			{
				write(1, "Error\n", 7);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_repeat_number(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_strlen(av[i]) == ft_strlen(av[j]))
			{
				if (ft_strncmp(av[i], av[j], ft_strlen(av[i])) == 0)
				{
						write(1, "Error\n", 7);
						return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_int(int ac, char **av, int *stack_a, int *stack_b)
{
	if (!check_digit(av) || !check_repeat_number(av))
	{
		free (stack_a);
		free (stack_b);
		return (0);
	}
	return (1);
}
