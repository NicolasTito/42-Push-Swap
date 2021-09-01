/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:03 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/01 20:12:28 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verifyTopBot(int *stack_a, int max, int size)
{
	int	i;
	int	counterT;
	int	counterB;

	i = 0;
	counterT = 0;
	counterB = 1;
	while (stack_a[i] > max)
	{
		i++;
		counterT++;
	}
	while (stack_a[--size] > max)
	{
		size--;
		counterB++;
	}
	if (counterT <= counterB)
		return (TOP);
	else
		return (BOT);
}

int	pass_chunkB(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	while (stack_a[0] <= array[s_l->chunKCopyFin])
	{
		pb(stack_a, stack_b, s_l);
		if (stack_b[0] < stack_b[1])
		{
			if (stack_a[0] > array[s_l->chunKCopyFin]
				&& stack_a[1] <= array[s_l->chunKCopyFin])
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
	int	n;

	i = 0;
	n = -1;
	while (stack_a[++n] > array[s_l->chunKCopyFin])
		ra_rb(stack_a, s_l->size_a, AA);
	i += pass_chunkB(stack_a, stack_b, array, s_l);
	return (i);
}

int	pass_bot(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;
	int	n;

	i = 0;
	n = s_l->size_a;
	while (stack_a[--n] > array[s_l->chunKCopyFin])
		rra_rrb(stack_a, s_l->size_a, AA);
	if(stack_a[--n] <= array[s_l->chunKCopyFin])
		rra_rrb(stack_a, s_l->size_a, AA);
	i += pass_chunkB(stack_a, stack_b, array, s_l);

	int j = -1;
	while (stack_b[++j] < s_l->size_b)
		printf("STACK_B: %d\n",  stack_b[j]);
	return (i);
}
