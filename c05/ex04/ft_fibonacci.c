/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:54:46 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/15 09:14:29 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	n = index;
	if (n == 2)
		return (1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		n = ft_fibonacci(n - 1) + ft_fibonacci(n - 2);
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_fibonacci(10));
}
*/
