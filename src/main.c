/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:11:56 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/10 17:35:34 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	start_stack(int *stack_a, int *stack_b, t_list *s_l, char **av)
{
	int	i;
	int	j;

	i = -1;
	while (++i < s_l->size_a)
	{
		stack_a[i] = 0;
		stack_b[i] = 0;
	}
	i = 0;
	j = 1;
	while (i < s_l->size_a)
		stack_a[i++] = ft_atoi(av[j++]);
	i = -1;
	while (++i < s_l->size_a + 1)
	{
		if (stack_a[i] == 0)
			stack_a[i] = 1;
	}
}

void	start_program(int ac, char **av)
{
	int		*stack_a;
	int		*stack_b;
	t_l	s_l;

	stack_a = (int *)malloc(sizeof(int) + ac - 1);
	stack_b = (int *)malloc(sizeof(int) + ac - 1);
	s_l.size_a = ac - 1;
	s_l.size_b = 0;
	if (!ft_check_int(ac, av, stack_a, stack_b))
		return ;
	start_stack(stack_a, stack_b, &s_l, av);
	free(stack_a);
	free(stack_b);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	start_program(ac, av);
	return (0);
}
