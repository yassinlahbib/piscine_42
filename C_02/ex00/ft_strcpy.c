/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:59:48 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 11:04:53 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	dest[] = "frfrerfrefref";

	src = "Je99";
	//strcpy(dest, src);
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
*/
