/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:51:37 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 08:14:07 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s2 && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
		n --;
	}
	if (n == 0 || *s1 == '\0')
		return (0);
	return (*s1 - *s2);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *s1 = "jae suisaaaaaaa";
	char *s2 = "jae suisaaa";

	printf("%d\n", strncmp(s1, s2, 60));
	printf("%d\n", ft_strncmp(s1, s2, 60));

	return (0);
}
*/
