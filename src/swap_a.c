/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/11 05:04:01 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_sb(int *stack, int size, int c)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	if (c == AA)
		write(1, "sa\n", 3);
	if (c == BB)
		write(1, "sb\n", 3);
	if (c == RR)
		return ;
}

void	ss(int *stack_a, int *stack_b, t_inf *s_l)
{
	if (s_l->size_a < 2 || s_l->size_a < 2)
		return ;
	sa_sb(stack_a, s_l->size_a, RR);
	sa_sb(stack_b, s_l->size_b, RR);
	write(1, "ss\n", 3);
}

void	ra_rb(int *stack, int size, int c)
{
	int	temp;
	int	i;

	i = -1;
	if (size < 2)
		return ;
	temp = stack[0];
	while (++i < size - 2)
		stack[i] = stack[i + 1];
	stack[size - 1] = temp;
	if (c == AA)
		write(1, "ra\n", 3);
	if (c == BB)
		write(1, "rb\n", 3);
	if (c == RR)
		return ;
}

void	rr(int *stack_a, int *stack_b, t_inf *s_l)
{
	if (s_l->size_a < 2 || s_l->size_b < 2)
		return ;
	ra_rb (stack_a, s_l->size_a, RR);
	ra_rb (stack_b, s_l->size_b, RR);
}
