/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:20:00 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 11:25:59 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str ++;
	}
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char phrase[] = "Je suiS une phrase normale.! Ok";
	ft_strupcase(phrase);
	printf("%s", phrase);
	return (0);
}
*/
