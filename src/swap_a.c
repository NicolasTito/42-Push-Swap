/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/10 23:41:51 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_sb(int *stack, int size, char c)
{
	int	temp;

	if(size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
	if (c == 's')
		return ;
}

void	ss(int *stack_a, int *stack_b, t_inf *s_l)
{
	if(s_l->size_a < 2 || s_l->size_a < 2)
		return ;
	sa_sb(stack_a, s_l->size_a, 's');
	sa_sb(stack_b, s_l->size_b, 's');
	write(1, "ss\n", 3);
}

void	ra_rb(int *stack, int size, char c)
{
	int	temp;
	int	i;

	i = -1;
	if (size < 2)
		return ;
	temp = stack[0];
	while(++i < size - 2)
		stack[i] = stack[i + 1];
	stack[size - 1] = temp;
	if (c = 'a')
		write(1, "ra\n", 3);
	if (c = 'b')
		write(1, "rb\n", 3);
	if (c = 'r')
		return ;
}

void	rr(int *stack_a, int *stack_b, t_inf *s_l)
{
	if (s_l->size_a < 2 || s_l->size_b < 2)
		return ;
	ra_rb (stack_a, s_l->size_a, 'r');
	ra_rb (stack_b, s_l->size_b, 'r');
	write(1, "rr\n", 3);
}
