/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:14:40 by nide-mel          #+#    #+#             */
/*   Updated: 2021/08/11 02:02:32 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define AA 0
# define BB 1
# define RR 2
# define TRUE 1
# define FALSE 0

# include "../libft/includes/libft.h"
typedef struct	stack_inf
{
	int	size_a;
	int	size_b;
}				t_inf;

int		check_repeat_number(char **av);
int		check_digit(char **av);
void	sa_sb(int *stack, int size, int c);
void	ss(int *stack_a, int *stack_b, t_inf *s_l);
void	ra_rb(int *stack, int size, int c);
void	rr(int *stack_a, int *stack_b, t_inf *s_l);
void	rra_rrb(int *stack, int size, int c);
void	rrr(int *stack_a, int *stack_b, t_inf *s_l);
void	pa(int *stack_a, int *stack_b, t_inf *s_l);
void	pb(int *stack_a, int *stack_b, t_inf *s_l);

#endif
