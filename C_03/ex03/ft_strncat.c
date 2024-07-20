/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:57:12 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/08 17:11:55 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest ++;
	while (*src && nb)
	{
		*dest = *src;
		src ++;
		dest ++;
		nb --;
	}
	*dest = '\0';
	return (ptr);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[50] = "Je suis ici";
	char *s2 = "Mais pas trop la";
	//printf("%sFIN", strncat(s1, s2, 0));
	printf("%sFIN", ft_strncat(s1, s2, 0));
	printf("\n%s", s2);
	return (0);
}
*/
