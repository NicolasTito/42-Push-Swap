/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:00:06 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/16 10:36:34 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	number_chunk(int *numberChunk, int *array, t_inf *s_l)
{
	int	i;

	i = s_l->chunkCopyInit - 1;
	while (++i < s_l->chunKCopyFin)
		numberChunk[i] = array[i];
}

void	sort_number(int *array, int *stack_a, int size)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < size)
	{
		array[i] = stack_a[i];
	}
	i = -1;
	while (++i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = -1;
		}
	}
	i = -1;
	while (++i < size)
		printf("%d\n", array[i]);
}
