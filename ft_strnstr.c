#include "libft.h"

char		*strnstr(const char *s1, const char *s2, size_t len)
{
	int		i;
	size_t	s2_len;

	i = 0;
	if (0 == (s2_len = strlen(s2)))
	{
		return (char *)s1;
	}
	while (i <= (int)(len - s2_len))
	{
		if ((s1[0] == s2[0]) &&
				(0 == strncmp(s1, s2, s2_len)))
			return (char *)s1;
		s1++;
	}
	i++;
	return (NULL);
}
