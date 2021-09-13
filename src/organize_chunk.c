/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:03 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/12 17:12:03 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pass_chunk_b(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	while (stack_a[0] <= array[s_l->chunk_fin])
	{
		pb(stack_a, stack_b, s_l);
		if (stack_b[0] < stack_b[1])
		{
			if (stack_a[0] > stack_a[1])
				ss(stack_a, stack_b, s_l);
			else
				sa_sb(stack_b, s_l->size_b, BB);
		}
		i++;
	}
	return (i);
}

int	pass_top(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	while (stack_a[0] > array[s_l->chunk_fin])
		ra_rb(stack_a, s_l->size_a, AA);
	i += pass_chunk_b(stack_a, stack_b, array, s_l);
	return (i);
}

int	pass_bot(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;
	int	n;

	i = 0;
	n = s_l->size_a;
	while (stack_a[--n] > array[s_l->chunk_fin])
		rra_rrb(stack_a, s_l->size_a, AA);
	if (stack_a[n] <= array[s_l->chunk_fin])
		rra_rrb(stack_a, s_l->size_a, AA);
	i += pass_chunk_b(stack_a, stack_b, array, s_l);
	return (i);
}

void	pass_ult_chunk(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	confer;

	confer = array[s_l->size - 3];
	while (s_l->size_a > 3)
	{
		while (stack_a[0] >= confer)
			ra_rb(stack_a, s_l->size_a, AA);
		pb(stack_a, stack_b, s_l);
	}
}
