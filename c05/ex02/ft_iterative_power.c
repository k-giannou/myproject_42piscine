/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:20:40 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/13 09:55:56 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 1;
	p = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	while (i <= power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_iterative_power(-10,5));
	return (0);
}
*/
