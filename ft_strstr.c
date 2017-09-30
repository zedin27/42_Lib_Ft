#include "libft.h"

char* ft_strstr(const char *big, const char *little)
{
	size_t b;

	if (*little ==  '\0')
		return((char*)big);

	b = ft_strlen(little);

	while (*big != '\0')
	{
		if (ft_strncmp(big, little, b) == 0)
			return ((char*)big);
		big++;
	}
	return(NULL);
}
