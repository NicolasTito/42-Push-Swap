/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:33:41 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/11 05:03:47 by nide-mel         ###   ########.fr       */
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
