/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:07:41 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/11 19:34:53 by ylahbib          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	*range = ft_range(min, max);
	if (*range)
		return (max - min);
	return (-1);
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
	maxi = 600;
	printf("%d\n",ft_ultimate_range(&tab, mini, maxi));
	print_tab(tab, maxi - mini);
	return (0);
}*/
