/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 07:09:22 by nide-mel          #+#    #+#             */
/*   Updated: 2021/09/12 17:12:38 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_struct(int ac, t_inf *s_l)
{
	s_l->size_a = ac - 1;
	s_l->size_b = 0;
	s_l->chunk = 1;
	s_l->size_chunk = 1;
	s_l->chunk_init = 0;
	s_l->chunk_fin = 0;
}

void	init_chunk(t_inf *s_l)
{
	if (s_l->size < 100)
		s_l->chunk = 2;
	else if (s_l->size >= 100 && s_l->size < 500)
		s_l->chunk = 5;
	else if (s_l->size >= 500)
		s_l->chunk = 11;
	s_l->size_chunk = s_l->size / s_l->chunk;
	s_l->chunk_init = s_l->size_chunk - 1;
	s_l->chunk_fin = s_l->chunk_init + s_l->size_chunk;
}
