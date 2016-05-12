#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((sizeof(src) + 1) * sizeof(char));
	i = 0;
	if (src[i] == '\0')
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
