/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:55:51 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 08:23:19 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest ++;
	while (*src)
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (ptr);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[50] = "lala";
	char *s2 = "lili";
	//printf("%s", strcat(s1, s2));
	printf("%s", ft_strcat(s1, s2));
	printf(",%s", s1);
	return (0);
}
*/
