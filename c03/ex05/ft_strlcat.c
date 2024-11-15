/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:40:50 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/26 12:03:37 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	lensrc;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (size <= j)
		return (size + i);
	len = j;
	lensrc = i;
	i = 0;
	while (i < size - 1 - len && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len + lensrc);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[26] = "test";
	char	*src;

	src = " string concatenation";
	printf("%d", ft_strlcat(dest, src, 26));
	printf("\n%s\n", dest);
	return (0);
}
*/
