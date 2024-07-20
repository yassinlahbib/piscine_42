/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:34:59 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/10 13:40:35 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power --;
	}
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_iterative_power(7,4));
	return (0);
}*/
