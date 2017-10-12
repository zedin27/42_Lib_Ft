/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:37:15 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/12 15:38:18 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**y0 I need a word count function fml
*/

char	**ft_strsplit(char const *s, char c)
{
	int		a;
	int		i;
	int		z;
	char	*y;
	char	**b;

	a = ft_delimitcount((char*)s, (int)c);
	i = 0;
	z = 0;
	y = (char*)s;
	b = malloc(sizeof(char*) * (a + 1));
	if (b == NULL)
		return (NULL);
	while (i < (a) && *s)
	{
		while (*s != c)
		{
			z++;
			s++;
		}
		if (z != 0)
		{
			b[i] = malloc((z) * sizeof(char));
			b[i] = ft_strncpy(b[i], y, z);
			y += z;
			z = 0;
			i++;
		}
		y++;
		s++;
	}
	b[i] = 0;
	return (b);
}
