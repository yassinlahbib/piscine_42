/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:44:56 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/01 11:31:25 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(tab + i, tab + (i + 1));
			}
			i ++;
		}
		size --;
	}
}

/*int	main(void)
{
	int	tab[7] = {8, 22, 13, 5, 2, 7, 3};

	ft_sort_int_tab(tab, 7);
	printf("%d ",tab[0]);
	printf("%d ",tab[1]);
	printf("%d ",tab[2]);
	printf("%d ",tab[3]);
	printf("%d ",tab[4]);
	printf("%d ",tab[5]);
	printf("%d ",tab[6]);


	return (0);
}*/
