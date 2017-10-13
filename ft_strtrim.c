/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:45:56 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/12 22:16:47 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strnew(0) is more consistent than simply returning "" ?
*/

static int	ft_boundspacecount(char const *a)
{
	char	*b;
	int		c;
	int		d;

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

char		*ft_strtrim(char const *s)
{
	char	*a;
	char	*b;
	int		c;
	int		d;

	if (s == NULL)
		return (NULL);
	a = (char*)s;
	if (*a == '\0')
		return ((char*)s);
	while (*a == ' ' || *a == '\n' || *a == '\t')
		a++;
	if (*a == '\0')
		return (ft_strnew(0));
	c = ft_boundspacecount(s);
	b = malloc(sizeof(char) * (ft_strlen(s) - c + 1));
	if (b == NULL)
		return (NULL);
	ft_bzero(b, (ft_strlen(a) + 1));
	d = ft_strlen(a);
	while (a[--d] == ' ' || a[d] == '\n' || a[d] == '\t')
		;
	ft_strncpy(b, a, (d + 1));
	return (b);
}
