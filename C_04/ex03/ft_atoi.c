/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:27:25 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/10 19:29:40 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	res;
	int	mult;

	mult = 1;
	res = 0;
	i = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i ++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * mult;
		res = res + (str [i] - '0');
		mult = 10;
		i ++;
	}
	return (res * signe);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("     ---+--+1234ab567"));
	return (0);
}
*/
