/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:51:42 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/09 17:32:50 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n > 0)
	{
		*dest = *src;
		dest ++;
		src ++;
		n --;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest ++;
		n --;
	}
	return (ptr);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	dest[50] = "Bonjour ";

	src = "Hello";
	//strncpy(dest, src, 6);
	ft_strncpy(dest, src, 1);
	printf("%s", dest);
	return (0);
}

