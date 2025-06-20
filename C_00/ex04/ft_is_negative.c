/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:57:10 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/01 11:24:55 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
	}
	else
	{
		a = 'P';
	}
	write(1, &a, 1);
}

/*int	main(void)
{
	ft_is_negative(-5);
	return (0);
}*/
