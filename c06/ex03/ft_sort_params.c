/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:29:58 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/25 10:48:51 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fsort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*x;

	i = 1;
	while (i + 1 <= argc - 1)
	{
		j = 0;
		while (argv[i][j] == argv[i + 1][j])
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			x = argv[i];
			argv[i] = argv[i + 1];
			argv[1 + i] = x;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	fsort(argc, argv);
	i = 1;
	j = 0;
	while (argc - 1 > 0)
	{
		while (argv[i][j] != '\0')
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
		argc--;
		j = 0;
	}
	return (0);
}
