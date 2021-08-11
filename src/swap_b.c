/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/10 23:41:16 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_rrb(int *stack, int size, char c)
{
	int	temp;
	int	last;
	int	i;

	if (size < 2)
		return ;
	i = 0;
	last = size - 1;
	temp = stack[last];
	while (--last >= 0)
		stack[last - 1] = stack[last];
	stack[size - 1] = temp;
	if (c == 'a')
		write(1, "rra\n", 4);
	if (c == 'b')
		write(1, "rrb\n", 4);
	if (c == 'r')
		return ;
}

void	rrr(int *stack_a, int *stack_b, t_inf *s_l)
{
	if (s_l->size_a < 2 || s_l->size_b < 2)
		return;
	rra_rrb(stack_a, s_l->size_a, 'r');
	rra_rrb(stack_b, s_l->size_b, 'r');
	write(1, "rrr\n", 4);
}
