/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:42:36 by knage             #+#    #+#             */
/*   Updated: 2016/05/09 18:29:58 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
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
    return (str[0]);
}

int main(void)
{
	char str1[] = "oldstring";
	char str2[] = "newstring";

	puts(str1);
	ft_memmove(str1, str2, 9);
	puts(str1);
	puts(str2);
	return (0);
}
