/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:29 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/17 12:10:25 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(4));
	//printf("%d\n", ft_is_prime(48529));
	return (0);
}
*/
