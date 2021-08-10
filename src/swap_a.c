/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/10 19:56:54 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa_sb(int *stack, int size, char c)
{
	int	temp;

	if(size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
	if (c == 's')
		return ;
}

void	ss(int *stack_a, int *stack_b, t_inf *s_l)
{
	if(s_l ->size_a < 2 || s_l->size_a < 2)
		return ;
	sa_sb(stack_a, s_l->size_a, 's');
	sa_sb(stack_b, s_l->size_b, 's');
	write(1, "ss\n", 3);
}


