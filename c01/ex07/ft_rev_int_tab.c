/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:59:40 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/19 10:45:17 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = c;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[5] = {1, 2, 4, 6, 8};
	int	i;

	ft_rev_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
