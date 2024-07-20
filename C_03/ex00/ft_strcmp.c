/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:49:53 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 08:11:17 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s2 != *s1)
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
	}
	if (*s1 == '\0')
		return (0);
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "je suis";
	char *s2 = "je suis ici";

	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));

	return (0);
}
*/
