/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaddux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:45:56 by smaddux           #+#    #+#             */
/*   Updated: 2017/10/13 02:30:17 by smaddux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



 char    *ft_strtrim(char const *s) 
 { 

      size_t        i;  
      size_t        start;  
      size_t        end;  
      char        	*str;  

      if (s == NULL)  
          return (NULL);  
      i = 0;  
      while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))  
          i++;  
      if (!s[i])  
          return (ft_strnew(0));  
      start = i;  
      while (s[i])  
          i++;  
      i--;  
      while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')  
          i--;  
      end = i + 1;  
      str = ft_strnew(end - start);  
      if (str == NULL)  
          return (NULL);  
      ft_strncpy(str, &s[start], end - start);  
      return (str);  
 } 
