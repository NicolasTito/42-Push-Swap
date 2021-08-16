/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:33:41 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/16 07:14:30 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	organize_3(int *stack_a, t_inf **s_l)
{
	if ((*s_l)->size_a == 2 && stack_a[0] > stack_a[1])
		sa_sb(stack_a, (*s_l)->size_a, AA);
	else if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2])
		sa_sb(stack_a, (*s_l)->size_a, AA);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
	{
		sa_sb(stack_a, (*s_l)->size_a, AA);
		rra_rrb(stack_a, (*s_l)->size_a, AA);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2])
		ra_rb(stack_a, (*s_l)->size_a, AA);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		& stack_a[0] < stack_a[2])
	{
		sa_sb(stack_a, (*s_l)->size_a, AA);
		ra_rb(stack_a, (*s_l)->size_a, AA);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[1] < stack_a[2])
		return ;
	else
		rra_rrb(stack_a, (*s_l)->size_a, AA);
}

void	pass_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;
	int	*numberChunk;

	i = 0;
	while (stack_a[0] < s_l->sizeChunk)
		pb(stack_a, stack_b, &s_l);
}

void	organize_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	i;

	i = 0;
	init_chunk(&s_l);
	while (++i < s_l->chunk)
	{
		pass_stack(stack_a, stack_b, array, &s_l);
		if (i > 1)
		{

		}
		s_l->chunKCopyFin = s_l->chunKCopyFin + s_l->sizeChunk;
		s_l->chunkCopyInit = s_l->chunkCopyInit + s_l->sizeChunk;
	}
}
