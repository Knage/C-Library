/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 17:12:03 by knage             #+#    #+#             */
/*   Updated: 2016/05/09 18:17:49 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	int		i;
	int		j;
	char	*strs[3];

	i = -1;
	j = 0;
	strs[0] = (char*)malloc(sizeof(str1));
	strs[1] = str1;
	strs[2] = (char*)str2;
	while (strs[1][++i])
		strs[0][i] = strs[1][i];
	while (strs[j] != strs[n] && strs[2])
	{
		strs[1][j] = strs[2][j];
		j++;
	}
	return (strs[0]);
}
