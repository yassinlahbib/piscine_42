/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:10:33 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/05 11:19:35 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb)
	{
		res = res * nb;
		nb -- ;
	}
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}
*/
