/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:11:56 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/09 15:15:17 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_program(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = (int *)malloc(sizeof(int) + ac - 1);
	stack_b = (int *)malloc(sizeof(int) + ac - 1);
	if (!ft_check_int(ac, av, stack_a, stack_b))
		return ;
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	start_program(ac, av);
	return (0);
}
