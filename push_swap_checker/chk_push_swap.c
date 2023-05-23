/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_push_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:53:56 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/23 15:54:14 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chk_push_swap.h"

void	esegui_mosse(t_stack *stack)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		ft_muovi(stack, str);
		free(str);
		str = get_next_line(0);
	}
}

void	ft_muovi(t_stack *stack, char *str)
{
	if (ft_strncmp(str, "sa", 2) == 0)
		ft_swap_wrt(stack, 'A');
	if (ft_strncmp(str, "sb", 2) == 0)
		ft_swap_wrt(stack, 'B');
	if (ft_strncmp(str, "ra", 2) == 0)
		ft_rotate_wrt(stack, 'A');
	if (ft_strncmp(str, "rb", 2) == 0)
		ft_rotate_wrt(stack, 'B');
	if (ft_strncmp(str, "rr", 3) == 0)
		ft_rotate_wrt(stack, 'R');
	if (ft_strncmp(str, "rra", 3) == 0)
		ft_rev_rotate_wrt(stack, 'A');
	if (ft_strncmp(str, "rrb", 3) == 0)
		ft_rev_rotate_wrt(stack, 'B');
	if (ft_strncmp(str, "rrr", 3) == 0)
		ft_rev_rotate_wrt(stack, 'R');
	if (ft_strncmp(str, "pb", 2) == 0)
		ft_push_wrt(&stack, 'B');
	if (ft_strncmp(str, "pa", 2) == 0)
		ft_push_wrt(&stack, 'A');
}

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
	esegui_mosse(stack);
	if (ft_check_order(stack) == 0)
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
	ft_free_stack_a_b(&stack);
	return (0);
}
