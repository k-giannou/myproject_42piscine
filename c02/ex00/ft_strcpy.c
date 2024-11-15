/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:02:25 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/11 10:47:17 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "Hellortgrtb ";
	char	src[] = "worffff6ffffffffffffffffffffffffffffffffffffd";

	//printf("%s\n", ft_strcpy(dest, src));
	//printf("okay\n");
	printf("%s", strcpy(dest, src));
	return (0);
}
*/
