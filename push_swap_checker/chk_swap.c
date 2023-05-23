/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:57:19 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/23 15:57:29 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chk_push_swap.h"

void	ft_swap_mov(t_stack *stack, char x)
{
	int	tmp;
	int	index_a;
	int	index_b;

	index_a = stack->size_a - 1;
	index_b = stack->size_b - 1;
	if (!stack)
		return ;
	if (x == 'A' || x == 'S')
	{
		tmp = stack->stack_a[index_a];
		stack->stack_a[index_a] = stack->stack_a[index_a - 1];
		stack->stack_a[index_a - 1] = tmp;
	}
	if (x == 'B' || x == 'S')
	{
		tmp = stack->stack_b[index_b];
		stack->stack_b[index_b] = stack->stack_b[index_b - 1];
		stack->stack_b[index_b - 1] = tmp;
	}
}

void	ft_swap_wrt(t_stack *stack, char x)
{
	if (x == 'S')
	{
		ft_swap_mov(stack, 'S');
	}
	else if (x == 'A')
	{
		ft_swap_mov(stack, 'A');
	}
	else if (x == 'B')
	{
		ft_swap_mov(stack, 'B');
	}
}
