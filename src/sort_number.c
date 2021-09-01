/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:00:06 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/01 13:58:59 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}
