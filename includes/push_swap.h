/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:14:40 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/12 17:12:38 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define AA 0
# define BB 1
# define RR 2
# define TRUE 1
# define FALSE 0
# define TOP 0
# define BOT 1

# include "../libft/includes/libft.h"

typedef struct stack_inf
{
	int	size;
	int	size_a;
	int	size_b;
	int	chunk;
	int	size_chunk;
	int	chunk_init;
	int	chunk_fin;
}		t_inf;

void	exit_program(int *stack_a, int *stack_b);
int		check_repeat_number(char **av);
void	start_struct(int ac, t_inf *s_l);
void	init_chunk(t_inf *s_l);
int		check_digit(char **av);
int		check_order(int *stack_a, int size);
void	sa_sb(int *stack, int size, int c);
void	ss(int *stack_a, int *stack_b, t_inf *s_l);
void	ra_rb(int *stack, int size, int c);
void	rr(int *stack_a, int *stack_b, t_inf *s_l);
void	rra_rrb(int *stack, int size, int c);
void	rrr(int *stack_a, int *stack_b, t_inf *s_l);
void	pa(int *stack_a, int *stack_b, t_inf *s_l);
void	pb(int *stack_a, int *stack_b, t_inf *s_l);
void	organize_3(int *stack_a, t_inf *s_l);
void	sort_number(int *array, int *stack_a, int size);
void	number_chunk(int *numberChunk, int *array, t_inf *s_l);
void	organize_stack(int *stack_a, int *stack_b, int *array, t_inf *s_l);
void	organize_stackB(int *stack_a, int *stack_b, int *array, t_inf *s_l);
void	passNumber(int *stack_a, int *stack_b, int *array, t_inf *s_l);
int		verify_t_b(int *stack_a, int max, int size);
int		pass_chunk_b(int *stack_a, int *stack_b, int *array, t_inf *s_l);
int		pass_top(int *stack_a, int *stack_b, int *array, t_inf *s_l);
int		pass_bot(int *stack_a, int *stack_b, int *array, t_inf *s_l);
void	pass_ult_chunk(int *stack_a, int *stack_b, int *array, t_inf *s_l);
int		check_pass_stack(int *stack, int num, int size);
void	pass_stack_a(int *stack_a, int *stack_b, int *array, t_inf *s_l);
void	pass_chunkers(int *stack_a, int *stack_b, int *array, t_inf *s_l);

#endif
