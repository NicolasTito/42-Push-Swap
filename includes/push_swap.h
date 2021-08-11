/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:14:40 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/11 00:12:22 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
typedef struct	stack_inf
{
	int	size_a;
	int	size_b;
}				t_inf;

int		check_int(char **av, int *stack_a, int *stack_b);
void	sa_sb(int *stack, int size, char c);
void	ss(int *stack_a, int *stack_b, t_inf *s_l);
void	ra_rb(int *stack, int size, char c);
void	rr(int *stack_a, int *stack_b, t_inf *s_l);
void	rra_rrb(int *stack, int size, char c);
void	rrr(int *stack_a, int *stack_b, t_inf *s_l);

#endif
