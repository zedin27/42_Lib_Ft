/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boundspacecount.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 23:12:16 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/12 23:12:53 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int      ft_boundspacecount(char const *a)
{
	char    *b;
	int             c;
	int             d;

	b = (char*)a;
	c = 0;
	while (*b == ' ' || *b == '\n' || *b == '\t')
	{
		b++;
		c++;
	}
	d = ft_strlen(b);
	while (b[--d] == ' ' || b[d] == '\n' || b[d] == '\t')
		c++;
	return (c);
}
