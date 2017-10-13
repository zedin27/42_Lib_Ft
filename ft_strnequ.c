/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:31:55 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/12 16:57:25 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t a;

	if (s1 == NULL || s2 == NULL)
		return (0);
	a = 0;
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		a++;
		if (a == n)
			break ;
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	else
		return (1);
}
