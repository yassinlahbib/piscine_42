/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:06:11 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/16 14:59:17 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	res = malloc(sizeof(int) * range);
	if (res == 0)
		return (0);
	i = 0;
	while (i < range)
	{
		res[i] = min + i;
		i ++;
	}
	return (res);
}
/*
#include <stdio.h>

void print_tab(int *tab, int size)
{
	int i;

	if (tab == 0)
		return ;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i ++;
	}
	printf("\n");
}

int main(void)
{
	int	*tab;
	int	mini;
	int	maxi;

	mini = 400;
	maxi = 450;
	tab = ft_range(mini, maxi);
	print_tab(tab, maxi - mini);
	return (0);
}*/
