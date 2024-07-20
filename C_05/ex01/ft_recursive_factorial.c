/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:17:02 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/05 11:24:34 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}
*/
