/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:42:36 by knage             #+#    #+#             */
/*   Updated: 2016/05/10 11:04:19 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	int		j;
	char	*str[3];

	i = -1;
	j = 0;
	str[0] = (char*)malloc(sizeof(dst));
	str[1] = dst;
	str[2] = (char*)src;
	while (str[1][++i])
		str[0][i] = str[1][i];
	while (str[j] != str[len] && str[2])
	{
		str[1][j] = str[2][j];
		j++;
	}
	return (dst);
}
