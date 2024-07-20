/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:37:06 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/02 12:10:45 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int		cpt;

	cpt = 0;
	while (*str)
	{
		cpt ++;
		str ++;
	}
	return (cpt);
}

/*int	main(void)
{
	char	*mot;
	int		taille;

	mot = "ababababababababababababababababababababab";
	taille = ft_strlen(mot);
	printf("%s", mot);
	write(1, &taille, 1);
	return (0);
}*/
