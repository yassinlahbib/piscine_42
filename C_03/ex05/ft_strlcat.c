/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:05:00 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/09 12:48:51 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	i = size;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	while (*dest && i)
	{
		dest ++;
		i --;
	}
	if (!i)
		return (size + size_src);
	while ((i > 1) && *src)
	{
		*dest = *src;
		dest ++;
		src ++;
		i --;
	}
	*dest = '\0';
	return (size_dest + size_src);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char s1[100] = "Mais";
	char *s2 = "Je suis la phrase";

	printf("%zu\n",strlcat(s2, s1, 7));
	//printf("%u\n",ft_strlcat(s2, s1, 7));
	printf("%sFIN", s1);
	return (0);
}
*/
