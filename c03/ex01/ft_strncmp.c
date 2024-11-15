/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:24:55 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/10 16:48:44 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && i < n && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)

{
	char	*s1;
	char	*s2;

	s1 = "13785";
	s2 = "13795";
	printf ("%d \n", ft_strncmp(s1, s2, 5));
	printf ("%d", strncmp(s1, s2, 5));
}
*/
