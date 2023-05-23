/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:47:32 by mgiovana          #+#    #+#             */
/*   Updated: 2023/05/15 14:45:47 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conversione(const char *nptr)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (((char *)nptr)[i] != '\0')
	{
		if (((char *)nptr)[i] >= '0' && ((char *)nptr)[i] <= '9')
			j = j * 10 + (((char *)nptr)[i] - '0');
		else
			return (j);
		i++;
	}
	return (j);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = 0;
	s = 1;
	while ((((char *)nptr)[i] >= '\t' && ((char *)nptr)[i] <= '\r')
			|| ((char *)nptr)[i] == 32)
		i++;
	if (((char *)nptr)[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (((char *)nptr)[i] == '+')
		i++;
	j = conversione(&((char *)nptr)[i]);
	return (j * s);
}
