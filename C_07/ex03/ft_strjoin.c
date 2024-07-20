/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:10:50 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/16 15:35:47 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

void	ft_copy_join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res[k++] = strs[i][j++];
		}
		j = 0;
		if (i < size - 1)
		{
			while (sep[j])
			{
				res[k++] = sep[j++];
			}
		}
		i ++;
	}
	res[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		numb_char;
	char	*res;

	j = 0;
	i = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i ++;
	}
	if (i > 1)
		i = ft_strlen(sep) * (i - 1);
	numb_char = i + j;
	res = (char *)malloc(sizeof(char) * numb_char + 1);
	if (res == 0)
		return (0);
	ft_copy_join(size, strs, sep, res);
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char *tab_char[] = {"Bonjour", "comment"};
	char *testjoin = ft_strjoin(2, tab_char, "-");
	printf("%s",testjoin);
	return (0);
}*/
