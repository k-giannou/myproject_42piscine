/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:40:54 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/17 16:00:27 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
}
*/
