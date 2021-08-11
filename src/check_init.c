/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:45:21 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/11 02:03:48 by nide-mel         ###   ########.fr       */
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
				return (FALSE);
			}
			j++;
		}
		i++;
	}
	return (TRUE);
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
					return (FALSE);
				}
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}
