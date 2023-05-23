/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_rotate_rev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:55:23 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/23 15:57:06 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chk_push_swap.h"

void	ft_rev_rotate_mov_a(t_stack *stack)
{
	int	*tmp;
	int	i;

	if (!stack)
		return ;
	i = 0;
	tmp = malloc((sizeof(int)) * stack->size_a);
	while (i < stack->size_a)
	{
		tmp[i] = stack->stack_a[i];
		i++;
	}
	stack->stack_a[stack->size_a - 1] = tmp[0];
	i = 1;
	while (i < stack->size_a)
	{
		stack->stack_a[i - 1] = tmp [i];
		i++;
	}
	free(tmp);
}

void	ft_rev_rotate_mov_b(t_stack *stack)
{
	int		*tmp;
	int		i;

	if (!stack)
		return ;
	i = 0;
	tmp = malloc((sizeof(int)) * stack->size_b);
	while (i < stack->size_b)
	{
		tmp[i] = stack->stack_b[i];
		i++;
	}
	stack->stack_b[stack->size_b - 1] = tmp[0];
	i = 1;
	while (i < stack->size_b)
	{
		stack->stack_b[i - 1] = tmp [i];
		i++;
	}
	free(tmp);
}

void	ft_rev_rotate_wrt(t_stack *stack, char x)
{
	if (x == 'A')
	{
		ft_rev_rotate_mov_a(stack);
	}
	else if (x == 'B')
	{
		ft_rev_rotate_mov_b(stack);
	}
	else if (x == 'R')
	{
		ft_rev_rotate_mov_a(stack);
		ft_rev_rotate_mov_b(stack);
	}
}
