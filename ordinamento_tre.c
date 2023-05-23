/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordinamento_tre.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:35:46 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/15 14:35:56 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ordinamento_tre(t_stack *stack)
{
	int	uno;
	int	due;
	int	tre;

	uno = stack->stack_a[0];
	due = stack->stack_a[1];
	tre = stack->stack_a[2];
	if (uno > due && uno > tre && due < tre)
		ft_swap_wrt(stack, 'A');
	else if (uno < due && uno < tre && due < tre)
	{
		ft_swap_wrt(stack, 'A');
		ft_rev_rotate_wrt(stack, 'A');
	}
	else if (uno > due && uno < tre && due < tre)
		ft_rotate_wrt(stack, 'A');
	else if (uno < due && uno > tre && due > tre)
	{
		ft_swap_wrt(stack, 'A');
		ft_rotate_wrt(stack, 'A');
	}
	else if (uno < due && uno < tre && due > tre)
		ft_rev_rotate_wrt(stack, 'A');
}
