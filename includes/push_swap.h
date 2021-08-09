/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:14:40 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/09 15:55:29 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
typedef struct	s_l
{
	int	size;
	int	top_b;
	int	bottom_a;
}				t_list;

int	check_int(int ac, char **av, int *stack_a, int *stack_b);

#endif
