#include "libft.h"

char* ft_strcpy(char* dst, const char* src)
{

    while ((*dst++ = *src++))
        ;

    return (dst);
}
