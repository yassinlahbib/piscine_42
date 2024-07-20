/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:19:08 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/02 16:04:32 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'z')
			return (0);
		if (*str > 'Z' && *str < 'a' )
			return (0);
		str ++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_str_is_alpha(""));
	return (0);
}
*/
