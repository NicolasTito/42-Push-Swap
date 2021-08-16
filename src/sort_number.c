/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:00:06 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/16 02:07:10 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(int *array, int size)
{
	int	temp;
	int	i;

	i = -1;
	while (++i < size)
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

int	*sort_number(int *stack_a, int size)
{
	int	*sNumber;
	int	i;

	i = -1;
	sNumber = (int *)malloc(sizeof(int) + size);
	if(!sNumber)
		return (0);
	while(++i <= size)
		sNumber[i] = stack_a[i];
	sort(sNumber, size);
	return(sNumber);
}
