/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:58:00 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/13 10:52:56 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power > 0)
		p = p * ft_recursive_power(nb, power - 1);
	else
		if (p != nb)
			return (p);
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("%d", ft_recursive_power(-10,3));
	return (0);
}
*/
