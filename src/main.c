/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:11:56 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/09 16:39:25 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_struct(t_list *s_l)
{
	s_l->bottom_a = s_l->size - 1;
	s_l->top_b = s_l->size;
}

void	start_stack(int *stack_a, int *stack_b, t_list *s_l, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < s_l->size)
	{
		stack_a[i] = 0;
		stack_b[i] = 0;
		i++;
	}
	i = 0;
	j = 1;
	while (i < s_l->size)
	{
		stack_a[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
	i = 0;
	while (j < s_l->size + 1)
	{
		if (stack_a[i] == 0)
			stack_a[i] = 1;
		i++;
	}
}

void	start_program(int ac, char **av)
{
	int		*stack_a;
	int		*stack_b;
	t_list	s_l;

	stack_a = (int *)malloc(sizeof(int) + ac - 1);
	stack_b = (int *)malloc(sizeof(int) + ac - 1);
	s_l.size = ac - 1;
	if (!ft_check_int(ac, av, stack_a, stack_b))
		return ;
	start_struct(&s_l);
	start_stack(stack_a, stack_b, &s_l, av);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	start_program(ac, av);
	return (0);
}
