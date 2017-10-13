/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:45:56 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/13 00:22:31 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*b;
	int		c;
	int		begin;
	int		term;

	if (!s)
		return (NULL);
	c = 0;
	while (s[c] && (s[c] == ' ' || s[c] == '\t' || s[c] == '\n'))
		c++;
	if (!s[c])
		return (ft_strnew(0));
	begin = c;
	while(s[c])
		c++;
	c--;
	while ((s[c] == ' ' || s[c] == '\t' || s[c] == '\n'))
		c--;
	term = c + 1;
	b = ft_strnew(term - begin);
	if (b == NULL)
		return (NULL);
	ft_strncpy(b, &s[begin], term - begin);
	return (b);
}
