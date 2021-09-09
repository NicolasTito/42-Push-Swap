/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:33:41 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/09 05:02:50 by nide-mel         ###   ########.fr       */
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
	while (i < s_l->sizeChunk)
	{
		n = verifyTopBot(stack_a, array[s_l->chunKCopyFin], s_l->size_a);
		if (n == TOP)
			i += pass_top(stack_a, stack_b, array, s_l);
		else if (n == BOT)
			i += pass_bot(stack_a, stack_b, array, s_l);
	}
}

void	pass_stackA(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	j;

	j = s_l->size - 3;
	while (array[--j])
	{
		if (check_pass_stack(stack_b, array[j], s_l->size_b) == TOP)
		{
			while (stack_b[0] != array[j])
				ra_rb(stack_b, s_l->size_b, BB);
		}
		else if (check_pass_stack(stack_b, array[j], s_l->size_b) == BOT)
		{
			while (stack_b[0] != array[j])
				rra_rrb(stack_b, s_l->size_b, BB);
		}
		pa(stack_a, stack_b, s_l);
	}
}

void	organize_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	init_chunk(s_l);
	while (++i < s_l->chunk)
	{
		pass_stack(stack_a, stack_b, array, s_l);
		s_l->chunKCopyFin = s_l->chunKCopyFin + s_l->sizeChunk;
		s_l->chunkCopyInit = s_l->chunkCopyInit + s_l->sizeChunk;
		if (check_order(stack_a, s_l->size_a) == TRUE)
			break ;
	}
	if (check_order(stack_a, s_l->size_a) == FALSE)
	{
		if (s_l->size_a > 3)
			pass_ult_chunk(stack_a, stack_b, array, s_l);
		organize_3(stack_a, s_l);
	}
	pass_stackA(stack_a, stack_b, array, s_l);
}
