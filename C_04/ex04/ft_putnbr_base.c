/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:43:32 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/10 16:46:13 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	check_base_repetition(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	if (base[i] == '\0')
		return (0);
	size = ft_strlen(base);
	while (i < size -1)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i ++;
	}
	if (base[i] == '-' || base[i] == '+')
		return (0);
	return (i + 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	i;
	int		len_base;

	i = nbr;
	if (check_base_repetition(base) == 0)
		return ;
	len_base = ft_strlen(base);
	if (i < 0)
	{
		write (1, "-", 1);
		i = i * (-1);
	}
	if (i < len_base)
		write (1, &base[nbr], 1);
	else
	{
		ft_putnbr_base (i / len_base, base);
		ft_putnbr_base (i % len_base, base);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*base_hex;
	char	*base_bin;
	char	*base_dec;

	base_hex = "0123456789ABCDEF";
	base_bin = "01";
	base_dec = "0123456789";
	//printf("%d\n", check_base(base));
	ft_putnbr_base(-2147483648, base_hex);
	printf("\n");
	ft_putnbr_base(-2147483648, base_bin);
	printf("\n");
	ft_putnbr_base(-2147483648, base_dec);
	printf("\n");
	//ft_putnbr(456, base);
	return (0);
}*/
