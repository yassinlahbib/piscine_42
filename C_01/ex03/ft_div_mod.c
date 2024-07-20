/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:10:09 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/02 12:09:42 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 65;
	y = 845;
	ft_div_mod(x, y, &div, &mod);
	write(1, &div, 1);
	write(1, &mod, 1);
	return (0);
}*/
