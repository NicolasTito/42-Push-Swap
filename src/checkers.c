/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:45:21 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/09 05:02:19 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(int *stack, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (FALSE);
	}
	return (TRUE);
}

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

int	verifyTopBot(int *stack_a, int max, int size)
{
	int	i;
	int	counterT;
	int	counterB;

	i = -1;
	counterT = 0;
	counterB = 1;
	while (stack_a[++i] > max)
		counterT++;
	i = size;
	while (stack_a[--i] > max)
		counterB++;
	if (counterT <= counterB)
		return (TOP);
	else
		return (BOT);
}

int	check_pass_stack(int *stack, int num, int size)
{
	int	i;
	int	counterT;
	int	counterB;

	i = -1;
	counterT = 0;
	counterB = 1;
	while (stack[++i] != num)
		counterT++;
	i = size;
	while (stack[--i] > num)
		counterB++;
	if (counterT <= counterB)
		return (TOP);
	else
		return (BOT);
}
