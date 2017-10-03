#include "libft.h"

char* ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t a;
	size_t b;
	a = 0;
	b = ft_strlen(little);

	if (*little == '\0')
		return((char*)big);

	if(b == len)
	{
		if (ft_strncmp(big, little, b) == 0)
			return((char*)big);
		else
			return(NULL);
	}

	while (*big != '\0' && (a < len))
	{
		if (ft_strncmp(big, little, b) == 0)
		{
			return ((char*)big);
		}
		a++;
		big++;
	}
	return(NULL);
}
