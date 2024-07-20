/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:25:17 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/10 14:34:27 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_fibonacci(12));
	return (0);
}*/
