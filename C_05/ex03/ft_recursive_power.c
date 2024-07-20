/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:41:13 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/17 12:09:48 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_power(0,2));
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(0,-5));
	printf("%d\n",ft_recursive_power(-2,0));
	printf("%d\n",ft_recursive_power(-2, -2));
	printf("%d\n",ft_recursive_power(-2,3));
	printf("%d\n",ft_recursive_power(-5,2));
	
	return (0);
}*/
