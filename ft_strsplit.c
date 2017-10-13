/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:37:15 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/13 01:30:06 by smaddux          ###   ########.fr       */
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

 	if (s == NULL) 
 		return (NULL); 
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
 			b[i] = ft_strncpy(b[i], &y, z); 
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

//KILL ME

/* static int        ft_strcount(char const *s, char c) */
/* { */
/*     int        count; */
/*     size_t    i; */

/*     i = 0; */
/*     count = 0; */
/*     while (s[i]) */
/*     { */
/*         while (s[i] == c) */
/*             i++; */
/*         while (s[i] && s[i] != c) */
/*             i++; */
/*         if (s[i - 1] != c) */
/*             count++; */
/*     } */
/*     return (count); */
/* } */

/* static char    *ft_strsep(char const *s, int len, long i) */
/* { */
/*     char    *str; */

/*     str = ft_strnew(len); */
/*     if (str == NULL) */
/*         return (NULL); */
/*     str[len--] = '\0'; */
/*     while (len >= 0) */
/*         str[len--] = s[i--]; */
/*     return (str); */
/* } */

/* static char    **ft_strsubsplit(char const *s, char **arr, int arr_len, char c) */
/* { */
/*     int        index; */
/*     int        str_len; */
/*     long    i; */

/*     i = 0; */
/*     index = 0; */
/*     while (index < arr_len) */
/*     { */
/*         str_len = 0; */
/*         while (s[i] && s[i] == c) */
/*             i++; */
/*         while (s[i] && s[i] != c) */
/*         { */
/*             i++; */
/*             str_len++; */
/*         } */
/*         if (s[i] == '\0' || s[i] == c) */
/*             arr[index++] = ft_strsep(s, str_len, i - 1); */
/*     } */
/*     arr[index] = NULL; */
/*     return (arr); */
/* } */

/* char        **ft_strsplit(char const *s, char c) */
/* { */
/*     int        arr_len; */
/*     char    **arr; */

/*     if (s == NULL) */
/*         return (NULL); */
/*     arr_len = ft_strcount(s, c); */
/*     if (!(arr = (char **)malloc(sizeof(char *) * arr_len + 1))) */
/*         return (NULL); */
/*     return (ft_strsubsplit(s, arr, arr_len, c)); */
/* } */
