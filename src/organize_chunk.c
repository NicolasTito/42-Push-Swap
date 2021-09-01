/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:03 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/01 15:50:55 by nide-mel         ###   ########.fr       */
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
	i = size;
	while(stack_a[i] > max)
	{
		i--;
		counterB++;
	}
	if (counterT <= counterB)
		return (TOP);
	else
		return (BOT);
}

int	pass_chunkB(int *stack_a, int *stack_b, int *array, t_inf *s_l)
{
	int i;

	i = 0;
	while (stack_a[0] <= array[s_l->chunKCopyFin])
	{
		pb(stack_a, stack_b, s_l);
		if (stack_b[0] < stack_b[1])
		{
			if (stack_a[0] > array[s_l->chunKCopyFin] &&
				stack_a[1] <= array[s_l->chunKCopyFin])
				ss(stack_a, stack_b, s_l);
			else
				sa_sb(stack_b, s_l->size_b, BB);
		}
		i++;
	}
	return (i);
}
