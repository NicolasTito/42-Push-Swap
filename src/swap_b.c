/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/08 13:29:58 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_rrb(int *stack, int size, int c)
{
	int	temp;
	int	last;

	if (size < 2)
		return ;
	last = size;
	temp = stack[last - 1];
	while (--last > 0)
	{
		stack[last] = stack[last - 1];
	}
	stack[0] = temp;
	if (c == AA)
		write(1, "rra\n", 4);
	if (c == BB)
		write(1, "rrb\n", 4);
	if (c == RR)
		return ;
}

void	rrr(int *stack_a, int *stack_b, t_inf *s_l)
{
	if (s_l->size_a < 2 || s_l->size_b < 2)
		return ;
	rra_rrb(stack_a, s_l->size_a, RR);
	rra_rrb(stack_b, s_l->size_b, RR);
	write(1, "rrr\n", 4);
}

void	pb(int *stack_a, int *stack_b, t_inf *s_l)
{
	int	temp;
	int	i;

	temp = stack_a[0];
	i = -1;
	while (++i < s_l->size_a)
		stack_a[i] = stack_a[i + 1];
	i = s_l->size_b + 1;
	while (--i > 0)
		stack_b[i] = stack_b[i - 1];
	stack_b[0] = temp;
	s_l->size_a--;
	s_l->size_b++;
	write(1, "pb\n", 3);
}

void	pa(int *stack_a, int *stack_b, t_inf *s_l)
{
	int	temp;
	int	i;

	temp = stack_b[0];
	i = -1;
	while (++i < s_l->size_b - 1)
		stack_b[i] = stack_b[i + 1];
	i = s_l->size_a + 1;
	while (--i > 0)
		stack_a[i] = stack_a[i - 1];
	stack_a[0] = temp;
	s_l->size_b--;
	s_l->size_a++;
	write(1, "pa\n", 3);
}
