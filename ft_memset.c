
#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	char	*d;

	d = dst;
	if (n)
	{
		while (n--)
		{
			*d++ = c;
		}
	}
	*d++ = '\0';
	return (dst);
}
