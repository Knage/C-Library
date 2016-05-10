/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 17:12:03 by knage             #+#    #+#             */
/*   Updated: 2016/05/10 09:17:13 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*strs[2];

	i = 0;
	strs[0] = dst;
	strs[1] = (char*)src;
	while (i < n && strs[1])
	{
		strs[0][i] = strs[1][i];
		i++;
	}
	return (dst);
}
