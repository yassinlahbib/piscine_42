/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:12:35 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/15 13:21:15 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i ++;
	}
}

void	ft_put_str_tab(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	if (argc == 1)
		return (0);
	i = 1;
	while (argc > 0)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i ++;
		}
		argc --;
	}
	ft_put_str_tab(argv);
	return (0);
}
