/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:26:52 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/01 11:30:53 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size -1;
	while (i < (size / 2))
	{
		ft_swap(tab + i, tab + j);
		i ++;
		j --;
	}
}

/*int	main(void)
{
	int	tab[7] = {1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(tab, 7);
	printf("%d ",tab[0]);
	printf("%d ",tab[1]);
	printf("%d ",tab[2]);
	printf("%d ",tab[3]);
	printf("%d ",tab[4]);
	printf("%d ",tab[5]);
	printf("%d ",tab[6]);
	return (0);
}*/
