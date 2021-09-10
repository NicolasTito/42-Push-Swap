/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:56:19 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/10 15:38:10 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	org_stackb(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	if (stack_b[0] < array[s_l->chunkCopyInit])
	{
		if (stack_a[0] > array[s_l->chunKCopyFin])
			rr(stack_a, stack_b, s_l);
		else
			ra_rb(stack_b, s_l->size_b, BB);
	}
	else
	{
		if (stack_a[0] > stack_a[1])
			ss(stack_a, stack_b, s_l);
		else
			sa_sb(stack_b, s_l->size_b, BB);
	}
}

void	pass_chunkers(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int	n;

	n = s_l->sizeChunk * 2;
	while (n > 0)
	{
		if (stack_a[0] <= array[s_l->chunKCopyFin])
		{
			pb(stack_a, stack_b, s_l);
			org_stackb(stack_a, stack_b, array, s_l);
			n--;
		}
		else
			ra_rb(stack_a, s_l->size_a, AA);
	}
}
