/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:15:20 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/16 10:41:13 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(int *stack_a, int *stack_b)
{
	write(1, "Error\n", 7);
	free(stack_a);
	free(stack_b);
	exit (0);
}
