/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:38:26 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 17:35:17 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	char	a;
	char	b;

	if (*str < 10 || (*str > 15 && *str < 26))
	{
		a = (*str / 16) + '0';
		b = (*str % 16) + 48;
	}
	else
	{
		a = (*str / 16) + '0';
		b = (*str % 16) + 87;
	}
	write (1, "\\", 1);
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
			ft_print(str);
		else
			write (1, str, 1);
		str ++;
	}
}
/*
int	main(void)
{
	char str[] = "Cou\ETXbon\Rcou\ttu vas \fbien ?";
	ft_putstr_non_printable(str);

	//int t = 42;
	//write(1,&t,1);
	return (0);
}
*/
