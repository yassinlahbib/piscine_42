/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:38:45 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/04 13:20:06 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str ++;
	}
	return (ptr);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	str = ft_strlowercase(str);
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	while (*(str + 1))
	{
		if (*str == ' ' || (*str < '0' || *str > 'z') || \
				(*str > '9' && *str < 'A') || (*str > 90 && *str < 97))
		{
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
			{
				*(str + 1) -= 32;
			}
		}
		str ++;
	}
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "vAs ? 42mots(quaRante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s",str);
	return (0);
}
*/
