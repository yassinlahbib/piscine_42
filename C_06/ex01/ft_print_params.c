/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:53:13 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/15 13:19:38 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	init;

	if (argc <= 1)
		return (0);
	init = 1;
	while (init < argc)
	{
		i = 0;
		while (argv[init][i])
		{
			write (1, &argv[init][i], 1);
			i ++;
		}
		write (1, "\n", 1);
		init ++;
	}
	return (0);
}
