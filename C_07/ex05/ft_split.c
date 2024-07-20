/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:47:48 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/17 11:59:57 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i ++;
	}
	return (0);
}

int	ft_countwords(char *str, char *charset)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	if (!ft_is_charset(str[i], charset))
		cpt ++;
	while (str[i + 1])
	{
		if (ft_is_charset(str[i], charset) && \
				!ft_is_charset(str[i + 1], charset))
			cpt ++;
		i ++;
	}
	return (cpt);
}

int	ft_len_words(char *str, char *charset, int begin)
{
	while (str[begin] && !ft_is_charset(str[begin], charset))
		begin ++;
	return (begin);
}

char	*ft_cpy(char *str, char *charset, int begin)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(int) * (ft_len_words(str, charset, begin) + 1));
	while (str[begin] && !ft_is_charset(str[begin], charset))
	{
		tab[i] = str[begin];
		i ++;
		begin ++;
	}
	tab[begin] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;
	int		index;

	i = 0;
	index = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countwords(str, charset) + 1));
	if (tab == 0)
		return (0);
	while (str[i])
	{
		if (ft_is_charset(str[i], charset))
		{	
			i ++;
		}
		else
		{
			tab[index] = ft_cpy(str, charset, i);
			i = ft_len_words(str, charset, i);
			index ++;
		}
	}
	tab[index] = 0;
	return (tab);
}
/*
#include <stdio.h>
void	ft_put_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	char	**tab;

	tab = ft_split(argv[1], argv[2]);
	ft_put_tab(tab);
	return (0);
}*/
