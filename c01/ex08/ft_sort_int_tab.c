/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:50:06 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/21 15:44:10 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size - 1)
	{
		while (c < size - 1)
		{
			if (tab[c] > tab[c + 1])
			{
				j = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = j;
				c = 0;
			}
			else
				c++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[15] = {34, 33, 10, 5, 1, 32, 9, 5, 5, 4, 3, 45, 154, 120, 41};
	int	i;

	i = 0;
	ft_sort_int_tab(tab, 15);
	while(i < 15)
	{
		printf("%d    ", tab[i]);
		i++;
	}
}
*/
