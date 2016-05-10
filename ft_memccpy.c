/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:58:56 by knage             #+#    #+#             */
/*   Updated: 2016/05/10 09:06:38 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	int						i;
	unsigned char			*tmps1;
	const unsigned char		*tmps2;

	i = 0;
	tmps1 = s1;
	tmps2 = s2;
	while (n > 0)
	{
		tmps1[i] = tmps2[i];
		if (tmps1[i] == (unsigned char)c)
			return (s1 + 1 + i);
		i++;
		n--;
	}
	return (NULL);
}
