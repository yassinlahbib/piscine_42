/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:04:23 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/16 15:19:45 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i ++;
	}
	dest = (char *)malloc((sizeof(char)) * (i + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	*src = "0123456789876543210";
	char	*dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	return (0);
}*/
