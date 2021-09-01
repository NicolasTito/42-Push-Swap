/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:33:41 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/01 20:15:21 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	organize_3(int *stack_a, t_inf *s_l)
{
	if (s_l->size_a == 2 && stack_a[0] > stack_a[1])
		sa_sb(stack_a, s_l->size_a, AA);
	else if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2])
		sa_sb(stack_a, s_l->size_a, AA);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
	{
		sa_sb(stack_a, s_l->size_a, AA);
		rra_rrb(stack_a, s_l->size_a, AA);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2])
		ra_rb(stack_a, s_l->size_a, AA);
	else if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2])
		& (stack_a[0] < stack_a[2]))
	{
		sa_sb(stack_a, s_l->size_a, AA);
		ra_rb(stack_a, s_l->size_a, AA);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] < stack_a[2])
		return ;
	else
		rra_rrb(stack_a, s_l->size_a, AA);
}

void	pass_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;
	int	n;

	i = pass_chunkB(stack_a, stack_b, array, s_l);
	printf("I: %d\n", i);
	while (i < s_l->sizeChunk)
	{
		n = verifyTopBot(stack_a, array[s_l->chunKCopyFin], s_l->size_a);
		printf("N: %d\n", n);
		if (n == TOP)
			i += pass_top(stack_a, stack_b, array, s_l);
		else if (n == BOT)
			i += pass_bot(stack_a, stack_b, array, s_l);
	}
}

void	organize_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	printf("TESTE\n");
	while (++i < s_l->chunk)
	{
		printf("I: %d\n", i);
		pass_stack(stack_a, stack_b, array, s_l);
		s_l->chunKCopyFin = s_l->chunKCopyFin + s_l->sizeChunk;
		s_l->chunkCopyInit = s_l->chunkCopyInit + s_l->sizeChunk;
	}
	i = -1;

	printf("\n\n");
	while (++i < s_l->size_a)
		printf("STACK_A: %d\n",stack_a[i]);
	i = -1;
	printf("\n\n");
	while (++i < s_l->size_b)
		printf("STACK_B: %d\n",stack_b[i]);
}
