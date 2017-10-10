#include "libft.h"

/*
** Two other ways to write the ternary code:
**
**  	while (pntsize-- != 0 && *dstp != '\0')  
**  		dstp++;  
**  	len = dstp - dst;  
**
** ##############################################
**
**  	if (pntsize > ft_strlen(dstp))  
**  		len = ft_strlen(dstp);  
**  	else  
**  		len = size;  
*/

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char *dstp;
	const char *srcp;
	size_t pntsize;
	size_t len;

	dstp = dst;
	srcp = src;
	pntsize = size;

	(pntsize > ft_strlen(dstp)) ? (len = ft_strlen(dstp)) : (len = size);

 	dstp += len; 
	pntsize = size - len;

	if (pntsize == 0)
		return (len + ft_strlen(srcp));
	while (*srcp != '\0')
	{
		if (pntsize-- != 1)
		{
			*dstp++ = *srcp;
		}
		srcp++;
	}
	*dstp = '\0';
	return (len + ((srcp) - src));
}
