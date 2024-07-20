/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 07:58:17 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/09 09:05:16 by ylahbib          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	size_find;

	if (!(*to_find))
	{
		return (str);
	}
	size_find = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, size_find) == 0)
			return (str);
		str ++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "Piscine";
	char *s2 = "";

	printf("%s",strstr(s1, s2));
	//printf("%s",ft_strstr(s1, s2));

	return (0);
}
*/
