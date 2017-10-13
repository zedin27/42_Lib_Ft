/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:37:15 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/13 02:00:54 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**y0 I need a word count function fml
*/



static char *ft_strshuffle(char const *s, int length, long c)
{
	char *a;

	a = ft_strnew(length);
	if (a == NULL)
		return (NULL);
	a[length--] = '\0';
	while (length >= 0)
		a[length--] = s[c--];
	return(a);
}

static char **ft_strmicrosplit(char const *s, char **col, int col_len, char a)
{
	int	dex;
	int	str_len;
	long d;

	d = 0;
	dex = 0;

	while (dex < col_len)
	{
		str_len = 0;
			while (s[d] && s[d] == a)
				d++;
			while (s[d] && s[d] != a)
			{
				d++;
				str_len++;
			}
			if (s[d] == '\0' || s[d] == a)
				col[dex++] = ft_strshuffle(s, str_len, d - 1);
	}
	col[dex] = NULL;
	return (col);
}

char	**ft_strsplit(char const *s, char c)
{
	int col_len;
	char **col;
	
	if (s == NULL)
		return (NULL);
	col_len = ft_delimitcount((char*)s, c);
	if (!(col = (char **)malloc(sizeof(char *) * col_len + 1)))
		return (NULL);
	return(ft_strmicrosplit(s, col, col_len, c));
}

/*  char	**ft_strsplit(char const *s, char c)  */
/*  {  */
/*  	int		a;  */
/*  	int		i;  */
/*  	int		z;  */
/*  	char	*y;  */
/*  	char	**b;  */

/*  	if (s == NULL)  */
/*  		return (NULL);  */
/*  	a = ft_delimitcount((char*)s, (int)c);  */
/*  	i = 0;  */
/*  	z = 0;  */
/*  	y = (char*)s;  */
/*  	b = malloc(sizeof(char*) * (a + 1));  */
/*  	if (b == NULL)  */
/*  		return (NULL);  */
/*  	while (i < (a) && *s)  */
/*  	{  */
/*  		while (*s != c)  */
/*  		{  */
/*  			z++;  */
/*  			s++;  */
/*  		}  */
/*  		if (z != 0)  */
/*  		{  */
/*  			b[i] = malloc((z) * sizeof(char));  */
/* 			if(b[i] == NULL) */
/* 			{ */
/* 				free(b); */
/* 				return (NULL); */
/* 			} */
/*  			b[i] = ft_strncpy(b[i], y, z);  */
/*  			y += z;  */
/*  			z = 0;  */
/*  			i++;  */
/*  		}  */
/*  		y++;  */
/*  		s++;  */
/*  	}  */
/*  	b[i] = 0;  */
/*  	return (b);  */
/*  }  */

