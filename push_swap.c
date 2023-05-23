/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:37:38 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/15 14:37:49 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac == 1)
		return (0);
	stack = malloc(sizeof(t_stack));
	if (ac == 2)
		ft_separa_av(av[1], stack);
	if (ac > 2)
		ft_separa_ac(ac, av, stack);
	if (stack->size_a == 2)
		ft_swap_wrt(stack, 'A');
	else if (stack->size_a == 3)
		ft_ordinamento_tre(stack);
	else if (stack->size_a > 3)
	{
		if (stack->size_a == 5)
			ft_ordinamento_cinque(stack);
		else
			ft_ordinamento_all(stack);
	}
	ft_free_stack_a_b(&stack);
	return (0);
}

void	ft_ordinamento_all(t_stack *stack)
{
	ft_push_wrt(&stack, 'B');
	ft_push_wrt(&stack, 'B');
	while (stack->size_a != 0)
		ft_punteggi_lista(&stack);
	while (ft_in_testa(stack->stack_b,
			ft_find_max_min(stack->stack_b, stack->size_b, 1),
			stack->size_b) == 0)
		ft_rotate_wrt(stack, 'B');
	while (stack->size_b != 0)
		ft_push_wrt(&stack, 'A');
}
