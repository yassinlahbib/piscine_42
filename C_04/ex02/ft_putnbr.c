/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:07:46 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/10 13:32:02 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nb(int i, int nb, int mult)
{
	while (i / 10 > 0)
	{
		i = i / 10;
		mult = mult * 10;
	}
	while (mult)
	{
		i = (nb / mult) + '0';
		nb = nb % mult;
		write (1, &i, 1);
		mult = mult / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	int	mult;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	mult = 1;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (-1);
	}
	i = nb;
	ft_write_nb(i, nb, mult);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(214);
	return (0);
}*/
