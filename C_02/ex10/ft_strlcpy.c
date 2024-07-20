/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:10:46 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/04 11:25:15 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str ++;
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		*dest = '\0';
		return (ft_strlen(src));
	}
	while (*src && (size - 1) > 0)
	{
		*dest = *src;
		dest ++;
		src ++;
		i ++;
		size --;
	}
	*dest = '\0';
	while (*src)
	{
		src ++;
		i ++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*p1 = "123456789";
	char	p2[]= "trkugefugweofg";

	printf("%d\n",ft_strlcpy(p2, p1, 2));
	printf("%s",p2);

	return (0);
}
*/
