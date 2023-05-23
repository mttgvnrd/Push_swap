/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:31:57 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/08 12:32:26 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ft(const char a, va_list args, int count)
{
	if (a == 'c')
		count += ft_printchar(va_arg(args, int));
	if (a == 's')
		count += ft_print_str(va_arg(args, char *));
	if (a == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long));
	if (a == 'd' || a == 'i')
		count += ft_print_int(va_arg(args, int));
	if (a == 'u')
		count += ft_print_unsigned_int(va_arg(args, unsigned int));
	if (a == 'x')
		count += ft_print_hex1(va_arg(args, int), 'x');
	if (a == 'X')
		count += ft_print_hex1(va_arg(args, int), 'X');
	if (a == '%')
		count += write(1, "%", 1);
	return (count);
}
