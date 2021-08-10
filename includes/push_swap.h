/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:14:40 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/10 17:31:08 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
typedef struct	s_l
{
	int	size_a;
	int	size_b;
	int	top_b;
	int	bottom_a;
}				t_l;

int	check_int(int ac, char **av, int *stack_a, int *stack_b);

#endif
