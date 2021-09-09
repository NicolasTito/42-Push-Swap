/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:11:56 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/09 04:28:26 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	if (check_order(stack_a, s_l->size_a) == TRUE)
		return ;
	if (s_l->size_a <= 3)
		organize_3(stack_a, s_l);
	else
	{
		organize_stack(stack_a, stack_b, array, s_l);
	}
}

void	start_stack(int *stack_a, int *stack_b, int ac, char **av)
{
	int			i;
	int			j;
	long int	temp;

	i = -1;
	while (++i < ac - 1)
	{
		stack_a[i] = 0;
		stack_b[i] = 0;
	}
	i = -1;
	j = 1;
	while (++i < ac - 1)
	{
		temp = ft_atoi(av[j++]);
		if (temp > 2147483647 || temp < -21474836478)
			exit_program(stack_a, stack_b);
		if (temp == 0)
			stack_a[i] = -1;
		else
			stack_a[i] = (int)temp;
	}
}

void	start_program(int ac, char **av)
{
	int		*stack_a;
	int		*stack_b;
	int		*array;
	t_inf	s_l;

	stack_a = (int *)malloc(sizeof(int) * (ac - 1));
	stack_b = (int *)malloc(sizeof(int) * (ac - 1));
	array = (int *)malloc(sizeof(int) * (ac - 1));
	s_l.size = ac - 1;
	if (check_digit(av) == FALSE || check_repeat_number(av) == FALSE)
	{
		free(stack_a);
		free(stack_b);
		free(array);
		return ;
	}
	start_struct(ac, &s_l);
	start_stack(stack_a, stack_b, ac, av);
	sort_number(array, stack_a, ac - 1);
	push_swap(stack_a, stack_b, array, &s_l);
	free(array);
	free(stack_a);
	free(stack_b);
}

int	main(int ac, char **av)
{
	if (ac < 3)
		return (0);
	start_program(ac, av);
	return (0);
}
