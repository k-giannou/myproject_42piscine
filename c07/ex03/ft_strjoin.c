/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiannou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:25:19 by kgiannou          #+#    #+#             */
/*   Updated: 2024/09/25 12:05:58 by kgiannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_finalen(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	len = (ft_finalen(size, strs) + (ft_strlen(sep) * (size - 1)) + 1);
	dest = (char *)malloc((len) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		if (i < (size - 1))
			ft_strcpy(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*x;

	strs[0] = "Test1";
	strs[1] = " ";
	strs[2] = "Test";
	x = ft_strjoin(3, strs, "");
	printf("%s", x);
	free(x);
	return (0);
}
*/
