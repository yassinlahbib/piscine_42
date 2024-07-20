/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahbib <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:20:14 by ylahbib           #+#    #+#             */
/*   Updated: 2024/07/03 11:26:34 by ylahbib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str ++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	*phrase_maj;

	char phrase[] = "Je suis une Phrase Normale.?";
	ft_strlowcase(phrase);
	printf("%s", phrase);
	return (0);
}*/
